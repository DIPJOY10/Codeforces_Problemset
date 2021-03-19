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
    int n;
    cin >> n;
    int a[n + 1];
    rep(i, 1, n)
    {
        cin >> a[i];
    }

    int ans[n + 2];
    rep(i, 0, n + 1)
    {
        ans[i] = 0;
    }
    int i = n;
    ans[n] = 0;
    while (i >= 1)
    {
        ans[i] += ans[i + 1];
        if (a[i] != 0)
        {
            ans[i] += 1;
            ans[max(0, i - a[i])] += -1;
        }
        i--;
        // if (a[i] == 0)
        // {
        //     i--;
        //     continue;
        // }
        // rep(j, max(0, i - a[i] + 1), i)
        // {
        //     ans[j] = 1;
        // }
        // i -= (a[i] - 1);
    }
    // rrep(i, n, 1)
    // {

    // }
    rep(i, 1, n)
    {
        if (ans[i] >= 1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    cout << endl;
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
