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
#define INF INT_MAX

ll helper(ll a, ll b, ll x, ll y, ll n)
{
    if (a - n >= x)
    {
        a -= n;
    }
    else
    {
        n = x - (a - n);
        a = x;
        if (b - n >= y)
        {
            b -= n;
        }
        else
        {
            b = y;
        }
    }
    return a * b;
}
void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll ans = 0;
    ans = min(helper(a, b, x, y, n), helper(b, a, y, x, n));
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
