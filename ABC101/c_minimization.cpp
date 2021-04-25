#include <iostream>
#include <vector>

using namespace std;

int where_one(int n, vector<int> v)
{
    for(int i = 0; i < n; i++)
    {
        if(v[i] == 1)
        {
            return i;
        }
    }
    return 0;
}

int comp_sum(int n, int k, int is_one)
{
    int sum = 0;
    int felem, selem;
    int last_elem;

    sum += is_one / k;
    cout << sum << endl;
    felem = is_one + ((k - 1) - is_one % k);
    if(n % k != 0)
    {
        felem -= (k - (n % k));
    }
    cout << felem << endl;
    last_elem = n - felem - 1;
    cout << last_elem << endl;
    
    if(felem != (n - 1))    //最後の要素でなかった場合
    {
        if(last_elem % (k - 1) == 0)
        {
            sum += last_elem / (k - 1); //後ろの要素列を走査した場合の回数
        }
        else
        {
            sum += last_elem / (k - 1) + 1; //後ろの要素列を走査した場合の回数
        }
        cout << sum << endl;
    }
    
    selem = is_one - is_one % k;
    cout << "selem: " << selem << endl;
    sum += selem / (k -1) + 1;

    return sum;
}

int main()
{
    int n, k;
    int input;
    vector<int> num_list;

    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        num_list.push_back(input);
    }

    int is_one;

    is_one = where_one(n, num_list);
    cout << "isone: " << is_one << endl;

    cout << comp_sum(n, k, is_one) << endl;
}