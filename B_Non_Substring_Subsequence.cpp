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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int flag = 1;
        for (int i = 0; i < l - 1; i++)
        {
            if (s[i] == s[l - 1])
            {
                flag = 0;
                break;
            }
        }
        for (int i = r; i < n; i++)
        {
            if (s[i] == s[r - 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
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
