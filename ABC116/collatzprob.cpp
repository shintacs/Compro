#include <iostream>

using namespace std;

int collatz(int a)
{
    if(a % 2 == 0)
    {
        return a/2;
    }
    else
    {
        return 3*a+1;
    }
}

int main()
{
    int s;
    int *A;

    cin >> s;
    A = (int*) malloc(sizeof(int));

    int i = 0;
    while(1)
    {
        if(i == 0)
        {
            A[i] = s;
        }
        else
        {
            A[i] = collatz(A[i-1]);

            for(int j = 0; j < i-1; j++)
            {
                if(A[j] == A[i])
                {
                    cout << i+1 << endl;
                    return 0;
                }
            }
        }
        i++;
    }
}
