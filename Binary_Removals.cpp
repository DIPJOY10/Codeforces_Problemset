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
    string s;
    cin >> s;
    int n = s.length();
    int flag = 1;
    rep(i, 0, n - 2)
    {
        if (s[i] > s[i + 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
        return;
    }
    rep(i, 1, n - 1)
    {
        if (s[i] == '1' && s[i - 1] == '1')
        {
            rep(j, i + 1, n - 2)
            {
                if (s[j] == '0' && s[j + 1] == '0')
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
