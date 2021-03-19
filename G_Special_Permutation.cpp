//author: Dipjoy Basak
//dip_10,dipjoy_10

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

void solve()
{
    int n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << -1 << endl;
        return;
    }

    int a[n];
    int start = n;
    int pos = 0;
    if (n % 2)
    {
        while (start >= 3)
        {
            a[pos++] = start;
            start -= 2;
        }
        a[pos++] = 1;
        a[pos++] = 4;
        a[pos++] = 2;
        start = 6;
        while (start <= n - 1)
        {
            a[pos++] = start;
            start += 2;
        }
    }
    else
    {
        pos = n - 1;
        while (start >= 6)
        {
            a[pos--] = start;
            start -= 2;
        }
        a[pos--] = 2;
        a[pos--] = 4;
        a[pos--] = 1;
        start = 3;
        while (start <= n - 1)
        {
            a[pos--] = start;
            start += 2;
        }
    }

    rep(i, 0, n - 1)
            cout
        << a[i] << " ";
    cout << endl;
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