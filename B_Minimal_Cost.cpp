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
    int n, u, v;
    cin >> n >> u >> v;
    vector<int> a(n);
    int flag = 0, p = -1;
    rep(i, 0, n - 1)
    {
        cin >> a[i];
    }
    int ans = INT_MAX;
    rep(i, 1, n - 1)
    {
        if (a[i] == a[i - 1])
            ans = min(ans, v + min(u, v));
        else if (abs(a[i] - a[i - 1]) == 1)
            ans = min(ans, min(u, v));
        else
            ans = 0;
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