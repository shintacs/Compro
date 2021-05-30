#include <iostream>

using namespace std;

int main()
{
    int n, k, sum;

    cin >> n >> k;
    sum = 0;

    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<k+1; j++)
        {
            sum += i*100;
            sum += j;
        }
    }

    cout << sum << endl;
}