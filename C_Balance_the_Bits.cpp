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
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += (s[i] == '0');
    }
    if (s[0] == '0' || s[n - 1] == '0' || cnt % 2)
    {
        cout << "NO" << endl;
        return;
    }

    int ones = (n - cnt);
    int flag = 1;
    string a = "", b = "";
    rep(i, 0, n - 1)
    {
        if (s[i] == '1')
        {
            if (ones > (n - cnt) / 2)
            {
                a += '(';
                b += '(';
                ones--;
            }
            else
            {
                a += ')';
                b += ')';
                ones--;
            }
        }
        else
        {
            if (flag)
            {
                a += '(';
                b += ')';
                flag = 0;
            }
            else
            {
                a += ')';
                b += '(';
                flag = 1;
            }
        }
    }

    cout << "YES" << endl;
    cout << a << endl
         << b << endl;
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
