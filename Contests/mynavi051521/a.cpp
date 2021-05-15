#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int A[3];
    int a;

    for(int i=0; i<3; i++)
    {
        cin >> a;
        A[i] = a;
    }

    sort(A, A+3);
    if(A[2]-A[1] == A[1]-A[0])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
