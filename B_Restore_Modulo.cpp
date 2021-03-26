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
    vector<ll> a(n);
    int flag1 = 0, flag2 = 0;
    rep(i, 0, n - 1)
    {
        cin >> a[i];
    }

    if (n == 1 || n == 2)
    {
        cout << 0 << endl;
        return;
    }

    int c = a[1] - a[0], temp;
    int check = 1;
    rep(i, 1, n - 1)
    {
        if (c != a[i] - a[i - 1])
        {
            check = 0;
        }
        if (i != 0 && a[i] >= a[i - 1])
        {
            flag1 = 1;
        }
        if (i != 0 && a[i] < a[i - 1])
        {
            flag2 = 1;
        }
        if (a[i] > a[i - 1])
        {
            temp = a[i] - a[i - 1];
        }
    }
    if (check)
    {
        cout << 0 << endl;
        return;
    }
    if (flag1 == 0 || flag2 == 0)
    {
        //if the array is ascending,descending with unqeual consecutive diff, then no m.
        cout << -1 << endl;
        return;
    }
    c = temp; //some positive c
    int m = -1;

    //finding m wherever there is a dip.
    rep(i, 1, n - 1)
    {
        if (c != a[i] - a[i - 1])
        {
            if (m == -1)
            {
                m = a[i - 1] + c - a[i];
                break;
            }
        }
    }

    //final check
    check = 1;
    rep(i, 1, n - 1)
    {
        if (a[i] != (a[i - 1] + c) % m)
        {
            cout << -1 << endl;
            return;
        }
    }

    if (a[0] >= m)
    {
        cout << -1 << endl;
        return;
    }
    if (m > 0 && c < m)
        cout << m << " " << c << endl;
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
