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
    if (n % 2)
    {
        cout << 1 << " " << (n - 1) / 2 << " " << (n - 1) / 2 << endl;
    }
    else
    {
        if ((n / 2) % 2)
        {
            cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2 << endl;
        }
        else
        {
            cout << n / 2 << " " << n / 4 << " " << n / 4 << endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
