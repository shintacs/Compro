#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main()
{
    int n, ai;
    
    cin >> n;
    int A[n];

    for(int i=0; i<n; i++)
    {
        cin >> ai;
        A[i] = ai;
    }

    sort(A, A+n);

    /*int num, min;
    for(int i=0; i<n; i++)
    {
        if(A[i] != 0)
        {
            min = A[i];
            num = i;
            break;
        }
            
    }*/

    int min = A[0];

    for(int i=1; i<n; i++)
    {
        if(A[i]%min != 0)
            min = gcd(A[i], min);
    }

    cout << min << endl;

}