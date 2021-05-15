#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n, ti;
    string si;

    cin >> n;
    int T[n];
    string ST[n][2];

    for(int i = 0; i < n; i++)
    {
        cin >> si >> ti;
        T[i] = ti;
        ST[i][0] = si;
        ST[i][1] = to_string(ti);
    }

    sort(T, T+n);

    for(int i = 0; i < n; i++)
    {
        if(T[n-2] == stoi(ST[i][1]))
        {
            cout << ST[i][0] << endl;
            break;
        }
    }
}
