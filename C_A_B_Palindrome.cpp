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
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = a + b;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            a--;
        if (s[i] == '1')
            b--;
    }
    int cnt = 0;
    rep(i, 0, n - 1)
    {
        if (a < 0 || b < 0)
        {
            cout << -1 << endl;
            return;
        }
        if (s[i] == '0')
        {
            if (s[n - 1 - i] == '?')
            {
                s[n - 1 - i] = '0';
                a--;
            }
            else if (s[n - 1 - i] == '0')
            {
                continue;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
        else if (s[i] == '1')
        {
            if (s[n - 1 - i] == '?')
            {
                s[n - 1 - i] = '1';
                b--;
            }
            else if (s[n - 1 - i] == '1')
            {
                continue;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?' && s[n - 1 - i] == '?')
        {
            if (i != n - 1 - i)
            {
                if (a >= b)
                {
                    a -= 2;
                    s[i] = s[n - 1 - i] = '0';
                }
                else
                {
                    b -= 2;
                    s[i] = s[n - 1 - i] = '1';
                }
            }
            else
            {
                if (a % 2)
                {
                    s[i] = '0';
                    a--;
                }
                else if (b % 2)
                {
                    s[i] = '1';
                    b--;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }
    if (a == 0 && b == 0)
        cout << s << endl;
    else
    {
        cout << -1 << endl;
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
