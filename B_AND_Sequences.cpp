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

int mod = 1000000007;
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = ((f % mod) * (i % mod)) % mod;
    }
    return f;
}
int moduloMul(int a, int b)
{
    int res = 0;
    a %= mod;

    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        a = (2 * a) % mod;

        b >>= 1;
    }

    return res;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int res = ((ll)1 << 33) - (ll)1;
    int mn = INT_MAX;
    rep(i, 0, n - 1)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        res &= a[i];
    }
    int ans = 0, cnt = 0;
    rep(i, 0, n - 1)
    {
        if (a[i] == mn)
            cnt++;
    }

    if (cnt < 2 || res != mn)
    {
        cout << 0 << endl;
        return;
    }
    ans = moduloMul(cnt, cnt - 1);
    ans = moduloMul(ans, fact(n - 2));
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
