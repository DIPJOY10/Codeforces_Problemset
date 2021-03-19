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
#define maxn 5000005

void solve()
{
    int n;
    cin >> n;
    int a[maxn];
    int x[maxn], y[maxn];
    rep(i, 1, n)
    {
        cin >> a[i];
    }

    //unordered map takes avg. of o(1) but not always. so if possible use arrays for hashing if
    //constraints permit and time limit is strict.
    rep(i, 1, n - 1)
    {
        rep(j, i + 1, n)
        {
            int sum = a[i] + a[j];
            if (x[sum] && x[sum] != i && x[sum] != j && y[sum] != i && y[sum] != j)
            {
                cout << "YES" << endl;
                cout << x[sum] << " " << y[sum] << " " << i << " " << j << endl;
                return;
            }
            x[sum] = i;
            y[sum] = j;
        }
    }
    cout << "NO" << endl;
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
