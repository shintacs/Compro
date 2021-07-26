#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define rep(i, n) for(int i=0; i<n; i++)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > path(n);
    rep(i,m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        //双方向リストにする
        path[a].push_back(b);
        path[b].push_back(a);
    }

    const int INF = 1001001001;
    vector<int> dist(n, INF);
    queue<int> q;
    q.push(0); dist[0] = 0;
    vector<int> vs; //queueで取り出された順番を記憶
    while(q.size())
    {
        int v = q.front(); q.pop();
        vs.push_back(v);
        for(int u: path[v])
        {
            if(dist[u] == INF)
            {
                dist[u] = (dist[v]+1);
                q.push(u);
            }
            
        }
    }

    vector<int> dp(n);
    dp[0] = 1;
    for(int v : vs)
    {
        for(int u : path[v])
        {
            if(dist[u] == dist[v]+1)
                dp[u] += dp[v]%1000000007;
        }
    }

    int ans = dp[n-1]%1000000007;
    cout << ans << endl;

    return 0;
}