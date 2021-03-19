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
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    char c1 = 'G', c2 = 'B';
    if (a < b)
    {
        swap(a, b);
        swap(c1, c2);
    }
    if (a > (b + 1) * k)
    {
        cout << "NO" << endl;
        return;
    }
    int cnt = 0;
    rep(i, 0, n - 1)
    {
        if (a > b && cnt < k)
        {
            cout << c1;
            a--;
            cnt++;
        }
        else
        {
            cout << c2;
            b--;
            cnt = 0;
        }
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