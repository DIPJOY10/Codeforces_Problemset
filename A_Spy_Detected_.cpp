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
    int idx = -1;
    int a[n];
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    for (auto x : s)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (x == a[i])
            {
                idx = i;
                cnt++;
            }
        }
        if (cnt == 1)
        {
            cout << idx + 1 << endl;
            return;
        }
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
