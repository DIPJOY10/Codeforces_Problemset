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

void solve()
{
    int n;
    cin >> n;
    int num = n;
    vpi v;
    int cnt = 0, mx = -1;
    while (n % 2 == 0)
    {
        cnt++;
        n = n / 2;
        mx = max(mx, cnt);
    }
    if (cnt > 0)
        v.pb({2, cnt});
    for (int i = 3; i <= sqrt(num); i = i + 2)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            mx = max(mx, cnt);
            n /= i;
        }
        if (cnt != 0)
            v.pb({i, cnt});
    }

    if (n > 2)
    {
        v.pb({n, 1});
        mx = max(mx, (ll)1);
    }
    cout << mx << endl;
    int ele = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second == mx)
        {
            ele = v[i].first;
            break;
        }
    }
    for (int i = 1; i < mx; i++)
    {
        cout << ele << " ";
    }
    if (mx == 1)
    {
        cout << num << endl;
    }
    else
    {
        cout << (num / ((ll)pow(ele, (mx - 1)))) << endl;
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
