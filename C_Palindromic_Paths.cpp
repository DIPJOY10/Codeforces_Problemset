//author: Dipjoy Basak
//dip_10

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
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

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    rep(i, 0, n - 1)
    {
        rep(j, 0, m - 1)
        {
            cin >> a[i][j];
        }
    }

    int ans = 0;
    vector<int> v[(n + m - 1)];
    rep(i, 0, n - 1)
    {
        rep(j, 0, m - 1)
        {
            if (2 * (i + j) < n + m - 2)
                v[i + j].pb(a[i][j]);
            else if ((i + j) != (n + m - 2 - i - j))
            {
                v[n + m - 2 - i - j].pb(a[i][j]);
            }
        }
    }

    rep(i, 0, (n + m - 2))
    {
        if (v[i].size() != 0)
        {
            int cnt0 = 0, cnt1 = 0;
            for (auto x : v[i])
            {
                if (x)
                    cnt1++;
                else
                    cnt0++;
            }
            ans += min(cnt1, cnt0);
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
