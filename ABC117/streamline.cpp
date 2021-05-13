#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, x;

    cin >> n >> m;
    int X[m];

    for(int i=0; i<m; i++)
    {
        cin >> x;
        X[i] = x;
    }
    
    sort(X, X+m);
    
    int Xd[m-1];
    for(int i=1; i<m; i++)
    {
        Xd[i-1] = X[i]-X[i-1];
    }

    sort(Xd, Xd+(m-1));

    int sum=0;
    for(int i=0; i<m-n; i++)
    {
        sum+=Xd[i];
    }
    
    cout << sum << endl;
}
