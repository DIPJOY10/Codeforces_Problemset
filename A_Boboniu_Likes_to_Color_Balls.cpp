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

bool check(int r, int b, int g, int w)
{
    return (r % 2 + b % 2 + g % 2 + w % 2) > 1;
}
void solve()
{
    int r, b, g, w;
    cin >> r >> b >> g >> w;
    if (!check(r, b, g, w))
    {
        cout << "Yes" << endl;
    }
    else if (r > 0 && b > 0 && g > 0 && !check(r - 1, b - 1, g - 1, w + 3))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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
