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
    int a[n], index[n + 1];
    rep(i, 0, n - 1)
    {
        cin >> a[i];
        index[a[i]] = i;
    }
    int upper = n - 1;
    for (int i = n; i >= 1; i--)
    {
        if (upper < 0)
            break;
        if (index[i] <= upper)
        {
            for (int j = index[i]; j <= upper; j++)
            {
                cout << a[j] << " ";
            }
            upper = index[i] - 1;
        }
    }
    cout << endl;
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