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
    int n, k;
    cin >> n >> k;
    vi x(n), y(n);
    rep(i, 0, n - 1)
    {
        cin >> x[i];
    }

    sort(x.begin(), x.end());
    rep(i, 0, n - 1)
    {
        cin >> y[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    vi l(n), r(n);
    int j = n - 1;
    //for a point i,finding the number of points to the right of it which are <=k distance apart.
    rrep(i, n - 1, 0)
    {
        while (x[j] - x[i] > k)
            j--;
        r[i] = j - i + 1;
        //taking the maximum points to the right of i including i
        if (i < n - 1)
            r[i] = max(r[i], r[i + 1]);
    }

    //to the left
    j = 0;
    rep(i, 0, n - 1)
    {
        while (x[i] - x[j] > k)
            j++;
        l[i] = i - j + 1;
        //taking the maximum points to the left of i including i
        if (i > 0)
            l[i] = max(l[i], l[i - 1]);
    }
    int ans = 1;
    rep(i, 0, n - 2)
    {
        ans = max(ans, l[i] + r[i + 1]);
    }

    cout << ans << endl;
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
