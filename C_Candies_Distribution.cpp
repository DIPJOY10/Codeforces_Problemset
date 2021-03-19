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
    int n;
    cin >> n;
    int l[n], r[n];
    int ans[n];
    rep(i, 0, n - 1)
    {
        cin >> l[i];
        ans[i] = n - l[i];
    }
    rep(i, 0, n - 1)
    {
        cin >> r[i];
        ans[i] -= r[i];
    }

    rep(i, 0, n - 1)
    {
        rep(j, 0, i - 1)
        {
            l[i] -= (ans[j] > ans[i]);
        }
        rep(j, i + 1, n - 1)
        {
            r[i] -= (ans[j] > ans[i]);
        }
        if (l[i] != 0 || r[i] != 0)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES" << endl;
    rep(i, 0, n - 1)
            cout
        << ans[i] << " ";
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