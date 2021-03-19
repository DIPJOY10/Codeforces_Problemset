//author: Dipjoy Basak
//dip_10,dipjoy_10

#include <bits/stdc++.h>
using namespace std;

// #define endl "\n"
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)

void solve()
{
    string s;
    cin >> s;
    vector<int> ans;
    if (s.length() == 1)
    {
        cout << 0;
    }
    else
    {
        rep(i, 0, s.length() - 2)
        {
            if (abs(s[i] - s[i + 1]) == 1)
            {
                ans.pb(1);
            }
            else
            {
                ans.pb(0);
            }
        }
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << ((s[s.length() - 1] == 'a') ? '1' : '0');
    }
    cout << endl;
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