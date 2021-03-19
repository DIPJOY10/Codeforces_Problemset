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
    vector<int> a(n);
    ll sum = 0;
    vector<pair<ll, int>> pref;
    rep(i, 0, n - 1)
    {
        cin >> a[i];
        sum += a[i];
        if (pref.empty() || sum > pref.back().first)
        {
            pref.pb({sum, i});
        }
    }

    while (m--)
    {
        ll x;
        cin >> x;
        if (x > pref.back().first && sum <= 0)
        {
            cout << -1 << " ";
            continue;
        }
        ll rounds = 0;
        if (pref.back().first < x)
        {
            rounds = (sum - 1 + x - pref.back().first) / sum;
        }
        x -= rounds * sum;
        auto pos = lower_bound(pref.begin(), pref.end(), mp(x, -1)) - pref.begin();
        cout << rounds * n + pref[pos].second << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    // t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
