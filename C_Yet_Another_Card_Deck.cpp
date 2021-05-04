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
    int n, q;
    cin >> n >> q;
    int a[n];
    vector<int> v(51);
    set<int> s;
    rep(i, 0, n - 1)
    {
        cin >> a[i];
        if (v[a[i]] == 0)
            v[a[i]] = i + 1;
    }

    rep(i, 0, q - 1)
    {
        int x;
        cin >> x;
        cout << v[x] << " ";
        rep(j, 1, 50)
        {
            if (v[j] < v[x])
                v[j]++;
        }
        v[x] = 1;
    }
}
int32_t main()
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
