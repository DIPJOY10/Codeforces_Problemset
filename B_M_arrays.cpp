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
    int n, m;
    cin >> n >> m;
    vi a(n);
    vi rem(m);
    rep(i, 0, n - 1)
    {
        cin >> a[i];
        rem[a[i] % m]++;
    }
    // int ans=n;
    int cnt = (rem[0] != 0) ? 1 : 0;
    rep(i, 1, m / 2)
    {
        if (i == m / 2 && m % 2 == 0 && rem[i] != 0)
        {
            cnt++;
            continue;
        }
        if (rem[i] == 0 && rem[m - i] == 0)
            continue;
        cnt++;
        if (rem[m - i] > rem[i])
        {
            rem[m - i] -= (rem[i] + 1);
            cnt += rem[m - i];
        }
        else if (rem[m - i] < rem[i])
        {
            rem[i] -= (rem[m - i] + 1);
            cnt += rem[i];
        }
    }
    cout << cnt << endl;
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
