//author: Dipjoy Basak
//dip_10

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define int ll
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
    string s[n];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == '*')
            {
                v.pb({i, j});
            }
        }
    }

    int x1 = v[0].first, x2 = v[1].first, y1 = v[0].second, y2 = v[1].second;
    int x3, x4, y3, y4;
    if (x1 == x2)
    {
        if (x1 != 0)
        {
            s[x1 - 1][y1] = '*';
            s[x2 - 1][y2] = '*';
        }
        else
        {
            s[x1 + 1][y1] = '*';
            s[x2 + 1][y2] = '*';
        }
    }
    else if (y1 == y2)
    {
        if (y1 != 0)
        {
            s[x1][y1 - 1] = '*';
            s[x2][y2 - 1] = '*';
        }
        else
        {
            s[x1][y1 + 1] = '*';
            s[x2][y2 + 1] = '*';
        }
    }
    else
    {
        s[x2][y1] = '*';
        s[x1][y2] = '*';
    }

    rep(i, 0, n - 1)
    {
        cout << s[i] << endl;
    }
}
int32_t main()
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
