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

int count(int n)
{
    int res = 0;
    while (n > 0)
    {
        n /= 10;
        res++;
    }
    return res;
}
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = 1, y = 1;
    while (a > 1)
    {
        a--;
        x *= 10;
    }
    while (b > 1)
    {
        b--;
        y *= 10;
    }
    int t = 1;
    while (c > 1)
    {
        t *= 10;
        c--;
    }
    y += t;
    cout << x << " " << y << endl;
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
