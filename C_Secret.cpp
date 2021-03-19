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
    int n, k;
    cin >> n >> k;
    if (3 * k > n)
        cout << -1 << endl;
    else
    {
        int a[n], cnt = 1;
        rep(i, 0, 2 * k - 1)
        {
            if (i != 0 && i % 2 == 0)
                cnt++;
            a[i] = cnt;
        }
        cnt = 1;
        rep(i, 2 * k, 3 * k - 1)
        {
            a[i] = cnt;
            cnt++;
        }
        rep(i, 3 * k, n - 1)
        {
            a[i] = 1;
        }
        rep(i, 0, n - 1)
        {
            cout << a[i] << " ";
        }
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