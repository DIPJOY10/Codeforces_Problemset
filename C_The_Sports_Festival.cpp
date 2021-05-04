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
#define maxn 2005
#define INF INT_MAX

int dp[maxn + 1][maxn + 1];

int rec(int a[], int i, int j)
{
    if (i == j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = a[j] - a[i] + min(rec(a, i + 1, j), rec(a, i, j - 1));
}

void solve()
{
    //1 3 3 3 6 6
    int n;
    cin >> n;
    int a[n];

    rep(i, 0, n - 1)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << rec(a, 0, n - 1);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    // cin >> t;
    memset(dp, -1, sizeof(dp));
    while (t--)
    {
        solve();
    }
    return 0;
}
