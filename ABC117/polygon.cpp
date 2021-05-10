#include <iostream>

using namespace std;

int main()
{
    int n, x, max, sum;

    cin >> n;
    int L[n];
    max = 0;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        L[i] = x;
        if(x > max)
        {
            max = x;
        }
        sum += x;
    }

    sum -= max;
    if(max < sum)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
