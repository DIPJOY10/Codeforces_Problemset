//author: Dipjoy Basak
//dip_10,dipjoy_10

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

void solve()
{
    int n;
    cin >> n;
    int a[n];
    rep(i, 0, n - 1)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "1 1" << endl;
        cout << 1 << endl;
        cout << "1 1" << endl;
        cout << -1 << endl;
        cout << "1 1" << endl;
        cout << -a[0] << endl;
    }
    else
    {
        cout << "1 1" << endl;
        cout << -a[0] << endl;
        cout << "2 " << n << endl;
        ll ans = n - 1;
        rep(i, 1, n - 1)
        {
            cout << ans * a[i] << " ";
        }
        cout << endl;
        cout << "1 " << n << endl;
        ans = n;
        cout << 0 << " ";
        rep(i, 1, n - 1)
        {
            cout << -ans * a[i] << " ";
        }
        cout << endl;
    }
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