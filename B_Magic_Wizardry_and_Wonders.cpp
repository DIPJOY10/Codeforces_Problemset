//author: Dipjoy Basak
//dip_10,dipjoy_10

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
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
    int n, d, l;
    cin >> n >> d >> l;
    int ans[n];
    rep(i, 0, n - 1)
    {
        if (d > 0)
            ans[i] = l;
        else
            ans[i] = 1;
        d = ans[i] - d;
    }
    ans[n - 1] -= d;
    if (ans[n - 1] > l || ans[n - 1] < 1)
        cout << -1 << endl;
    else
    {
        rep(i, 0, n - 1)
                cout
            << ans[i] << " ";
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