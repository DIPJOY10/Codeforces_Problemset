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

void solve()
{
    int n;
    cin >> n;
    vpi a(n);
    int pos = 0, neg = 0;
    rep(i, 0, n - 1)
    {
        cin >> a[i].first >> a[i].second;
        if (a[i].first < 0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }

    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = max(0, neg - pos - 1); i <= min(n - 1, 2 * neg); i++)
    {
        ans += a[i].second;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
