//author: Dipjoy Basak
//dip_10,dipjoy_10

#include <bits/stdc++.h>
using namespace std;

// #define endl "\n"
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)

void solve()
{
    int n, m;
    cin >> n >> m;
    ll b[n], g[m];
    ll mx = 0, smax = 0, mn = INT_MAX, sum = 0, sum2 = 0;
    rep(i, 0, n - 1)
    {
        cin >> b[i];
        mx = max(mx, b[i]);
        sum2 += b[i];
    }
    sort(b, b + n);
    rep(i, 0, m - 1)
    {
        cin >> g[i];
        mn = min(mn, g[i]);
        sum += g[i];
    }
    ll res = m * sum2 + sum - (m * mx);
    if (mx == mn)
    {
        cout << res;
    }
    else if (mx < mn)
    {
        res += (mx - b[n - 2]);
        cout << res;
    }
    else
    {
        cout << -1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}