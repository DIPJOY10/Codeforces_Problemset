//author: Dipjoy Basak
//dip_10

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define int ll
#define ld long double
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)
#define debug(x) cout << x << "debug" << endl;
#define maxn 1000005
#define INF INT_MAX
#define mod 1000000007

int dp[10][200007];

void solve()
{
    string s;
    int m;
    cin >> s >> m;
    int ans = 0;
    for (char c : s)
    {
        ans = (ans + dp[c - '0'][m]) % mod;
    }
    cout << ans << endl;
}

void precompute()
{
    memset(dp, 0, sizeof(dp));
    //no operations
    rep(i, 0, 9)
    {
        dp[i][0] = 1;
    }

    rep(i, 1, 200005)
    {
        rep(j, 0, 8)
        {
            //every digits becomes equal number of digits as the next digit one operation before
            dp[j][i] = dp[j + 1][i - 1];
        }
        dp[9][i] = (dp[1][i - 1] + dp[0][i - 1]) % mod;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    cin >> t;
    precompute();
    while (t--)
    {
        solve();
    }
    return 0;
}
