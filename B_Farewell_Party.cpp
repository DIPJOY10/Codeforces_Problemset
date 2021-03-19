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
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)

void solve()
{
    int n;
    cin >> n;
    vi a[n + 1];
    int b[n];
    rep(i, 0, n - 1)
    {
        int x;
        cin >> x;
        a[n - x].pb(i);
    }
    int x = 0, cnt = 0;
    rep(i, 1, n)
    {
        for (auto num : a[i])
        {
            if (cnt == 0)
            {
                cnt = i;
                x++;
            }
            b[num] = x;
            cnt--;
        }
        if (cnt != 0)
        {
            cout << "Impossible" << endl;
            return;
        }
    }

    cout << "Possible" << endl;
    rep(i, 0, n - 1)
            cout
        << b[i] << " ";
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