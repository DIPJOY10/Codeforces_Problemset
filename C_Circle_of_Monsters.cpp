//author: Dipjoy Basak
//dip_10,dipjoy_10

#include <bits/stdc++.h>
using namespace std;

// #define endl "\n"
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)

void solve()
{
    int n;
    cin >> n;
    //more optimized and efficient soln.
    // all monsters can be considered to contribute min(a[i],b[i-1]) bullets.
    //but since we cannot utilize the last monsters explosions, we need and extra of min(a[i+1],b[i]) bullets if we consider the
    // last monster to be killed as i th.
    // so we choose the index which as min(a[i+1],b[i]) as minimum possible.we add this many bullets the overall answer.

    ll a[n], b[n];
    rep(i, 0, n - 1)
    {
        cin >> a[i] >> b[i];
    }

    ll ans = 0, mn = LONG_LONG_MAX;
    rep(i, 0, n - 1)
    {
        ans += a[(i + 1) % n] - min(a[(i + 1) % n], b[i]);
        mn = min(mn, min(a[(i + 1) % n], b[i]));
    }
    ans += mn;
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