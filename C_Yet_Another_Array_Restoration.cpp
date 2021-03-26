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
#define INF INT_MAX

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    //brute force
    if (n == 2)
    {
        cout << x << " " << y << endl;
        return;
    }
    int a1, d1;
    ll mn = INF;
    rep(start, 1, x)
    {
        rep(d, 1, y)
        {
            if ((x - start) % d == 0 && (y - start) % d == 0 && y < start + ((ll)n * d))
            {
                if (start + (ll)n * d < mn)
                {
                    mn = start + (ll)n * d;
                    a1 = start;
                    d1 = d;
                }
            }
        }
    }
    rep(i, 1, n)
    {
        cout << a1 + (i - 1) * d1 << " ";
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
