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
    vi a(14);
    rep(i, 0, 13)
    {
        cin >> a[i];
    }

    ll mx = 0;

    rep(i, 0, 13)
    {
        vi temp = a;
        int s = temp[i];
        temp[i] = 0;
        if (s >= 14)
        {
            rep(j, i, 13 + i)
            {
                temp[j % 14] += s / 14;
            }
            // cout << "y" << endl;
        }
        s %= 14;
        rep(j, i + 1, 13 + i)
        {
            if (s == 0)
                break;
            temp[j % 14] += 1;
            s--;
        }

        ll sm = 0;
        rep(k, 0, 13)
        {
            if (temp[k] % 2 == 0)
                sm += temp[k];
        }
        mx = max(sm, mx);
    }
    cout << mx << endl;
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
