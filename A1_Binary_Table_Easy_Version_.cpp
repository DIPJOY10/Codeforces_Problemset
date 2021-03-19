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
    int n, m;
    cin >> n >> m;
    char arr[n + 1][m + 1];
    int cnt = 0;
    rep(i, 1, n)
    {
        rep(j, 1, m)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '1')
                cnt++;
        }
    }
    cout << cnt * 3 << endl;
    rep(i, 1, n)
    {
        rep(j, 1, m)
        {
            int kx = 1, ky = 1;
            if (i == n)
                kx = -1;
            if (j == m)
                ky = -1;
            if (arr[i][j] == '1')
            {
                cout << i << " " << j << " " << i + kx << " " << j << " " << i << " " << j + ky << endl;
                cout << i << " " << j << " " << i + kx << " " << j << " " << i + kx << " " << j + ky << endl;
                cout << i << " " << j << " " << i << " " << j + ky << " " << i + kx << " " << j + ky << endl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    // t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}