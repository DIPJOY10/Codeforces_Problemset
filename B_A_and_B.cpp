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
    int a, b;
    cin >> a >> b;
    int diff = abs(a - b);
    if (diff == 0)
    {
        cout << 0 << endl;
        return;
    }

    ll res = 1;
    while (true)
    {
        ll sum = res * (res + 1) / 2;
        //once the sum is greater than the abs. diff, you can
        //always divide the sum into a and b and make them
        //equal given than the parities of sum and diff are same.
        if (sum >= diff && diff % 2 == sum % 2)
        {
            break;
        }
        res++;
    }
    cout << res << endl;
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
