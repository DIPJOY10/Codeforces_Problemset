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
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    rep(i, 0, n - 1)
    {
        cin >> a[i];
    }
    int flag = 0;
    rep(i, 0, m - 1)
    {
        cin >> b[i];
        rep(j, 0, n - 1)
        {
            if (a[j] == b[i])
            {
                flag = 1;
            }
        }
    }
    sort(a, a + n);
    sort(b, b + m);
    int mn1 = a[0], mn2 = b[0];
    if (flag == 0)
    {
        if (mn2 < mn1)
        {
            cout << mn2 * 10 + mn1 << endl;
        }
        else
        {
            cout << mn1 * 10 + mn2 << endl;
        }
    }
    else
    {
        rep(i, 0, n - 1)
        {
            rep(j, 0, m - 1)
            {
                if (a[i] == b[j])
                {
                    cout << a[i] << endl;
                    return;
                }
            }
        }
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
