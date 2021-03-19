//author: Dipjoy Basak
//dip_10

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
    int n, u, r, d, l;
    cin >> n >> u >> r >> d >> l;
    bool flag = false;
    //using bitmasking to check all possible combinations
    rep(i, 0, 15)
    {
        int t1 = u, t2 = r, t3 = d, t4 = l;
        if (i & 1)
            t1--, t2--;
        if (i & 2)
            t2--, t3--;
        if (i & 4)
            t3--, t4--;
        if (i & 8)
            t4--, t1--;
        //at any combination if all values lie in undisturbing range(n-2)
        if (t1 >= 0 && t1 <= n - 2 && t2 >= 0 && t2 <= n - 2 && t3 >= 0 && t3 <= n - 2 && t4 >= 0 && t4 <= n - 2)
        {
            flag = true;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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