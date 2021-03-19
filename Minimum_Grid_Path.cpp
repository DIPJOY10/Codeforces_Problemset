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
    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> c(n);
    rep(i, 0, n - 1)
    {
        cin >> c[i];
    }

    vi store[2];
    store[0].pb(c[0]);
    store[1].pb(c[1]);
    ans = n * (c[0] + c[1]);
    ll mn1 = c[0], mn2 = c[1];
    ll sum1 = c[0], sum2 = c[1];
    rep(i, 2, n - 1)
    {
        if (i % 2)
        {
            mn2 = min(mn2, c[i]);
            sum2 += c[i];
        }
        else
        {
            mn1 = min(mn1, c[i]);
            sum1 += c[i];
        }
        store[i % 2].pb(c[i]);
        ans = min(ans, sum1 + sum2 - mn1 - mn2 + (n - store[0].size() + 1) * mn1 + (n - store[1].size() + 1) * mn2);
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
