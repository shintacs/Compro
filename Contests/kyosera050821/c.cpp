#include <iostream>

using namespace std;

long combo(long x)
{
    return x*(x-1)/2;
}

long ringo(long *A)
{
    long cnt = 0;
    for(int i = 0; i < 200; i++)
    {
        if(A[i] > 1)
        {
            cnt += combo(A[i]);
        }
    }
    return cnt;
}

int main()
{
    int n;
    long ai;
    long A[200] = {};

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> ai;
        A[ai%200] = A[ai%200] + 1;
    }

    cout << ringo(A) << endl;
}