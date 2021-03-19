//author: Dipjoy Basak
//dip_10

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double
#define pb push_back
// #define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)
#define debug(x) cout << x << "debug" << endl;

void solve()
{
    int n;
    cin >> n;
    //used map to check frequency of each element
    //using set will give error!
    map<ll, int> mp;
    rep(i, 0, 2 * n - 1)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    for (auto i : mp)
    {
        if (i.second != 2)
        {
            cout << "NO" << endl;
            return;
        }
    }
    vector<ll> d;
    for (auto j : mp)
        d.pb(j.first);
    sort(d.begin(), d.end());
    ll sum = 0;
    int flag = 1;
    rrep(i, n - 1, 0)
    {
        d[i] -= sum;
        if (d[i] > 0 && (d[i] % (2 * (i + 1)) == 0))
        {
            d[i] /= (2 * (i + 1));
            sum += 2 * d[i];
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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