#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, ai;
    cin >> n;

    int A[n];
    int B[n];
    for(int i=0; i<n; i++)
    {
        cin >> ai;
        A[i] = ai;
        B[i] = i+1;
    }

    sort(A, A+n);

    for(int i=0; i<n; i++)
    {
        if(A[i] != B[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}