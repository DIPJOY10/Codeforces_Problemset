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
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    int w, b;
    cin >> w >> b;
    int white, black;
    white = min(k1, k2);
    int k3 = n - k1, k4 = n - k2;
    black = min(k3, k4);
    if (k1 > k2)
    {
        white += (k1 - k2) / 2;
    }
    else
    {
        white += (k2 - k1) / 2;
    }
    if (k3 > k4)
    {
        black += (k3 - k4) / 2;
    }
    else
    {
        black += (k4 - k3) / 2;
    }
    if (w <= white && b <= black)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
