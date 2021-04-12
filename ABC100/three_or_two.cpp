#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    vector<int> v;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    int sum = 0;
    int num = 0;

    while(num <= n)
    {
        if(v[num] % 2 == 0 && v[num] != 0){
            v[num] = v[num] / 2;
            sum += 1;
        }else{
            num++;
        }
    }

    cout << sum << endl;
}
