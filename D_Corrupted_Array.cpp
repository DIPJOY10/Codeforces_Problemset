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
    vector<int> b(n + 2);
    rep(i, 0, n + 1)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    int sum = 0;
    rep(i, 0, n - 1)
    {
        sum += b[i];
    }
    if (sum == b[n])
    {
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
        return;
    }

    sum += b[n];
    for (int i = 0; i < n + 1; i++)
    {
        if (sum - b[i] == b[n + 1])
        {
            for (int j = 0; j < n + 1; j++)
            {
                if (j != i)
                {
                    cout << b[j] << " ";
                }
            }
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
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
