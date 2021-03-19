//author: Dipjoy Basak
//dip_10,dipjoy_10

#include <bits/stdc++.h>
using namespace std;

// #define endl "\n"
#define ll long long
#define ld long double
#define pb push_back
#define vi vector<int>
#define mp make_pair
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    int a[n], b[n];
    vi check(n);
    rep(i, 0, n - 1)
    {
        cin >> a[i];
        if (i >= l - 1 && i <= r - 1)
            check[a[i]]++;
    }

    rep(i, 0, n - 1)
    {
        cin >> b[i];
        if (i >= l - 1 && i <= r - 1)
            check[b[i]]--;
    }

    rep(i, 0, n - 1)
    {
        if (check[i] != 0)
        {
            cout << "LIE" << endl;
            return;
        }
    }

    cout << "TRUTH" << endl;
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