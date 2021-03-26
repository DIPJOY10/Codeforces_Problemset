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

bool helper(ll n, int s)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt += (n % 10);
        n /= 10;
    }

    if (cnt <= s)
        return true;
    return false;
}
void solve()
{
    ll n;
    int s;
    cin >> n >> s;
    if (helper(n, s))
    {
        cout << 0 << endl;
        return;
    }

    ll t = n;
    int cnt = 0;
    while (t > 0)
    {
        cnt++;
        ll num = (t / 10) + 1;
        if (helper(num, s))
        {
            while (cnt--)
            {
                num *= 10;
            }
            cout << num - n << endl;
            return;
        }
        t /= 10;
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
