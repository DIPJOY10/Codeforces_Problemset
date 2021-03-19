//author: Dipjoy Basak
//dip_10,dipjoy_10

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
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
    int a, b, k;
    cin >> a >> b >> k;
    if (k == 0)
    {
        string ans1 = "1", ans2 = "1";
        b--;
        rep(i, 1, b)
        {
            ans1 += '1';
            ans2 += '1';
        }
        rep(i, 1, a)
        {
            ans1 += '0';
            ans2 += '0';
        }
        cout << "Yes" << endl;
        cout << ans1 << endl
             << ans2 << endl;
    }
    else if (k > a + b - 2 || (k != 0 && (a == 0 || b == 0)))
    {
        cout << "No" << endl;
    }
    else
    {
        string ans1 = "1", ans2 = "1";
        b--;
        if (b == 0)
        {
            cout << "No" << endl;
            return;
        }
        b--;
        a--;
        ans1 += '1';
        ans2 += '0';
        int i = k - 1;
        while (i > 0)
        {
            if (a > 0)
            {
                ans1 += '0';
                ans2 += '0';
                a--;
            }
            else if (b > 0)
            {
                ans1 += '1';
                ans2 += '1';
                b--;
            }
            else
            {
                cout << "No";
                return;
            }
            i--;
        }
        ans1 += '0';
        ans2 += '1';
        rep(i, 1, a)
        {
            ans1 += '0';
            ans2 += '0';
        }
        rep(i, 1, b)
        {
            ans1 += '1';
            ans2 += '1';
        }
        cout << "Yes" << endl;
        cout << ans1 << endl
             << ans2 << endl;
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