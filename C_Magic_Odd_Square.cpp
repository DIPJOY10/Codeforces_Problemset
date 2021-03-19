//author: Dipjoy Basak
//dip_10,dipjoy_10

#include <bits/stdc++.h>
using namespace std;

// #define endl "\n"
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)

void solve()
{
    int n;
    cin >> n;
    int a[n][n];
    rep(i, 0, n - 1)
        rep(j, 0, n - 1)
            a[i][j] = 0;
    int ptr = 1;
    rep(i, 0, n - 1)
    {
        int temp = i;
        if (i > n / 2)
            temp = n - 1 - i;
        rep(j, (n / 2) - temp, (n / 2) + temp)
        {
            a[i][j] = ptr;
            ptr += 2;
        }
    }
    ptr = 2;
    rep(i, 0, n - 1)
    {
        rep(j, 0, n - 1)
        {
            if (a[i][j] == 0)
            {
                a[i][j] = ptr;
                ptr += 2;
            }
        }
    }

    rep(i, 0, n - 1)
    {
        rep(j, 0, n - 1)
                cout
            << a[i][j] << " ";
        cout << endl;
    }
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