#include <iostream>

using namespace std;

int main()
{
    int n, m, ai;

    cin >> n >> m;
    int count[m];

    for(int i=0; i<m; i++)  //initialization
    {
        count[i] = 0;
    }

    for(int i=0; i<n; i++)  //count each amount
    {
        int k;
        cin >> k;
        for(int j=0; j<k; j++)
        {
            cin >> ai;
            count[ai-1] = count[ai-1]+1;
        }
    }

    int cnt = 0;

    for(int i=0; i<m; i++)  //count ans
    {
        if(count[i] == n)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
