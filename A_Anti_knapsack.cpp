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

void solve()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    rrep(i, k - 1, (k + 1) / 2)
    {
        cnt++;
    }
    cout << cnt + (n - k) << endl;
    rrep(i, k - 1, (k + 1) / 2)
    {
        cout << i << " ";
    }
    rep(i, k + 1, n)
    {
        cout << i << " ";
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