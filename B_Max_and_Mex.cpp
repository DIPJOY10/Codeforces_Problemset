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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, 0, n - 1)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int mex = -1;
    rep(i, 0, n - 1)
    {
        if (a[i] != i)
        {
            mex = i;
            break;
        }
    }
    if (mex == -1)
    {
        cout << (ll)n + k << endl;
    }
    else
    {
        int nw = (mex + a[n - 1] + 1) / 2;
        rep(i, 0, n - 1)
        {
            if (a[i] == nw)
            {
                cout << n << endl;
                return;
            }
        }
        if (k == 0)
            cout << n << endl;
        else
            cout << n + 1 << endl;
    }
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
