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
    string a, b;
    cin >> a >> b;
    vpi cnt(n);
    int c0 = 0, c1 = 0;
    rep(i, 0, n - 1)
    {
        if (a[i] == '0')
            c0++;
        else
            c1++;
        cnt[i].first = c0;
        cnt[i].second = c1;
    }
    int flag = 0;
    rrep(i, n - 1, 0)
    {
        if (a[i] == b[i])
        {
            if (flag % 2 == 0)
            {
                continue;
            }
            else
            {
                if (cnt[i].first != cnt[i].second)
                {
                    cout << "NO" << endl;
                    return;
                }
                else
                {
                    flag++;
                }
            }
        }
        else
        {
            if (flag % 2 == 1)
            {
                continue;
            }
            else
            {
                if (cnt[i].first != cnt[i].second)
                {
                    cout << "NO" << endl;
                    return;
                }
                else
                {
                    flag++;
                }
            }
        }
    }
    cout << "YES" << endl;
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
