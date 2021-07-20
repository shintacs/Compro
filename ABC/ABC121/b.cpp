#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, c;
    int bi, ai;
    int s_sum, sum;
    cin >> n >> m >> c;

    vector<int> B;
    for(int i=0; i<m; i++)
    {
        cin >> bi;
        B.push_back(bi);
    }

    sum = 0;
    for(int i=0; i<n; i++)
    {
        s_sum = 0;
        for(int j=0; j<m; j++)
        {
            cin >> ai;
            s_sum += ai*B[j];
        }
        s_sum += c;
        if(s_sum > 0)
            sum++;
    }

    cout << sum << endl;
}