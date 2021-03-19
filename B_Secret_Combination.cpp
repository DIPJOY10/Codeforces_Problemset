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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string mn = s, temp;
    rep(cnt, 0, 9)
    {
        rep(i, 0, n - 1)
        {
            s[i] = (s[i] - '0' + 1) % 10 + '0';
        }
        temp = s + s;
        rep(i, 0, n - 1)
        {
            mn = min(mn, temp.substr(i, n));
        }
    }
    cout << mn;
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