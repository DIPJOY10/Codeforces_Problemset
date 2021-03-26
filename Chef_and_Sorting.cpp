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
    int n;
    cin >> n;
    int a[n];
    rep(i, 0, n - 1)
    {
        cin >> a[i];
    }

    int ans = 0;
    int cnt = 0, equal = 0;
    rep(i, 1, n - 1)
    {
        if (a[i] < a[i - 1])
        {
            cnt++;
        }
        if (a[i] == a[i - 1])
            equal++;
    }
    ans = cnt;
    if (ans > n / 2)
    {
        ans = n - ans;
        ans -= equal;
    }

    cout << ans << endl;
    ll k = ((ll)1 << 30) - 1;
    if (cnt > n / 2)
    {
        cout << 3 << " " << n << " " << k << endl;

        rep(i, 0, n - 1)
        {
            a[i] ^= k;
        }
    }
    rrep(i, n - 1, 1)
    {
        if (a[i] < a[i - 1])
        {
            cout << 2 << " " << i + 1 << " " << k << endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
