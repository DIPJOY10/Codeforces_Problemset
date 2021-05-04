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
    string s;
    cin >> s;
    int n = s.length();
    int ptr = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'a')
        {
            ptr = i;
            break;
        }
    }
    if (ptr == -1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    string s1 = s.substr(0, n - ptr) + 'a' + s.substr(n - ptr);
    cout << s1 << endl;
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
