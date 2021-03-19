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
    int h, w;
    cin >> h >> w;
    int a[h + 1][w + 1];
    rep(i, 1, h)
    {
        rep(j, 1, w)
        {
            char c;
            cin >> c;
            if (c == '.')
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    int dp1[h + 1][w + 1], dp2[h + 1][w + 1];
    rep(i, 0, h)
    {
        rep(j, 0, w)
        {
            dp1[i][j] = 0;
            dp2[i][j] = 0;
        }
    }
    rep(i, 1, h)
    {
        rep(j, 1, w)
        {
            dp1[i][j] += dp1[i - 1][j] + dp1[i][j - 1] - dp1[i - 1][j - 1];
            dp2[i][j] += dp2[i - 1][j] + dp2[i][j - 1] - dp2[i - 1][j - 1];
            if (a[i][j] == 1)
            {
                if (j > 1 && a[i][j - 1] == 1)
                {
                    dp1[i][j]++;
                }
                if (i > 1 && a[i - 1][j] == 1)
                {
                    dp2[i][j]++;
                }
            }
        }
    }

    // rep(i, 1, h)
    // {
    //     rep(j, 1, w)
    //     {
    //         cout << dp1[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // rep(i, 1, h)
    // {
    //     rep(j, 1, w)
    //     {
    //         cout << dp2[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int r1, r2, c1, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        ll res = 0;
        //break vertical and horizontal matrices and find individually and add.
        res += dp1[r2][c2] - dp1[r1 - 1][c2] - dp1[r2][c1] + dp1[r1 - 1][c1];
        res += dp2[r2][c2] - dp2[r1][c2] - dp2[r2][c1 - 1] + dp2[r1][c1 - 1];
        cout << res << endl;
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
