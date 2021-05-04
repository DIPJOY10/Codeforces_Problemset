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

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int f[n + 1] = {0};
    int mn[n + 1] = {0};
    bool flag = false;
    rep(i, 0, n - 1)
    {
        cin >> a[i];
        if (i > 0 && a[i] != a[i - 1])
            flag = true;
    }
    if (!flag)
    {
        cout << 0 << endl;
        return;
    }

    rep(i, 0, n - 1)
    {
        if (f[a[i]] == 0)
        {
            if (i != 0 && a[i] != a[i - 1])
                mn[a[i]]++;
            if (i != n - 1 && a[i] != a[i + 1])
                mn[a[i]]++;
        }
        else
        {
            if (i != n - 1 && a[i] != a[i + 1])
                mn[a[i]]++;
        }
        f[a[i]]++;
    }
    int ans = INT_MAX;
    rep(i, 1, n)
    {
        if (f[i] != 0)
            ans = min(ans, mn[i]);
    }
    cout << ans << endl;
}
int32_t main()
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
