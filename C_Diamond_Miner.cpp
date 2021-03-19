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
    vector<ld> x, y;
    rep(i, 0, 2 * n - 1)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            y.pb(abs(b));
        }
        else
        {
            x.pb(abs(a));
        }
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    ld ans = 0, ans2 = 0;
    rep(i, 0, n - 1)
    {
        ans += sqrt(((ld)x[i] * x[i]) + ((ld)y[n - 1 - i] * y[n - 1 - i]));
    }
    rep(i, 0, n - 1)
    {
        ans2 += sqrt(((ld)x[i] * x[i]) + ((ld)y[i] * y[i]));
    }
    cout << setprecision(15) << min(ans, ans2) << endl;
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
