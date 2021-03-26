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
    ll n, k;
    cin >> n >> k;
    ll temp;
    temp = n;
    int c2 = 0, c5 = 0;
    while (temp > 1)
    {
        if (temp % 2 == 0)
        {
            c2++;
        }
        else
            break;
        temp /= 2;
    }
    temp = n;
    while (temp > 1)
    {
        if (temp % 5 == 0)
        {
            c5++;
        }
        else
            break;
        temp /= 5;
    }
    if (c2 < k)
    {
        while (c2 != k)
        {
            n *= 2;
            c2++;
        }
    }

    if (c5 < k)
    {
        while (c5 != k)
        {
            n *= 5;
            c5++;
        }
    }
    cout << n << endl;
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
