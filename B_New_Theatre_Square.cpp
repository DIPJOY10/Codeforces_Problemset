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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    char c[n][m];
    int flag = 1;
    if (2 * x > y)
    {
        flag = 0;
    }

    rep(i, 0, n - 1)
    {
        rep(j, 0, m - 1)
        {
            cin >> c[i][j];
        }
    }

    ll cost = 0;

    rep(i, 0, n - 1)
    {
        rep(j, 0, m - 1)
        {
            if (flag)
            {
                if (c[i][j] == '.')
                    cost += x;
            }
            else
            {
                if (c[i][j] == '.')
                {
                    if (j != m - 1 && c[i][j + 1] == '.')
                    {
                        cost += y;
                        j++;
                    }
                    else
                    {
                        cost += x;
                    }
                }
            }
        }
    }
    cout << cost << endl;
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
