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
#define INF INT_MAX

void solve()
{
    int n;
    cin >> n;
    vi p(n + 1);
    rep(i, 1, n)
    {
        cin >> p[i];
    }

    rep(i, 1, n)
    {
        vi temp(n + 1);
        rep(j, 1, n)
            temp[j] = j;
        int j = p[i];
        temp[i] = 0;
        while (temp[j] != 0)
        {
            int t = j;
            j = p[j];
            temp[t] = 0;
        }
        cout << j << " ";
    }
    cout << endl;
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
