#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<int> > dp(n+1, vector<int>(9));
    rep(i, n+1) dp[i][0] = 1;
    const int mod = 1000000007;
    string t = "chokudai";
    rep(i, n)rep(j, 8){
        dp[i+1][j+1] = dp[i][j+1];
        if(s[i] == t[j])
            dp[i+1][j+1] = (dp[i+1][j+1] + dp[i][j]) % mod;
    }
    cout << dp[n][8] << endl;
    return 0;
}