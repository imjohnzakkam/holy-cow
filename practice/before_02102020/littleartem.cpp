# include <bits/stdc++.h>
using namespace std;
# define fi cin
# define fo cout
string s[512];
int dp[512][512];
int main(void)
{
    int n;
    fi>>n;
    for (int i = 1;i <= n;++i)
        fi>>s[i];
    int k = s[1].length();
    for (int i = 1;i <= n;++i)
        for (int j = 0;j < k;++j)
            dp[i][j] = 1e9;
    for (int i = 1;i <= n;++i)
        s[i] = s[i] + s[i];
    for (int i = 0;i < k;++i)
        dp[1][i] = i;
    for (int i = 2;i <= n;++i)
    {
        for (int j = 0;j < k;++j)
            for (int prev = 0;prev < k;++prev)
                if (s[i].substr(j,k) == s[i-1].substr(prev,k))
                    dp[i][j] = min(dp[i][j],dp[i-1][prev] + j);
    }
    int ans = 1e9;
    for (int i = 0;i < k;++i)
        ans = min(ans,dp[n][i]);
    if (ans == 1e9)
        puts("-1");
    else
        fo << ans << '\n';
    return 0;
}


