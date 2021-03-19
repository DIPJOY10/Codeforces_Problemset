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
    int n;
    cin >> n;
    vpi stn(n + 1);
    stn.pb({0, 0});
    rep(i, 1, n)
    {
        cin >> stn[i].first >> stn[i].second;
    }
    int tms[n + 1];
    rep(i, 0, n - 1)
    {
        cin >> tms[i + 1];
        // cout << tms[i + 1] << endl;
    }
    ll ans = 0;

    rep(i, 1, n)
    {
        ans += (tms[i] + stn[i].first - stn[i - 1].second);
        if (i == n)
            break;
        ans += (stn[i].second - stn[i].first + 1) / 2;
        if (ans < stn[i].second)
        {
            ans = stn[i].second;
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
