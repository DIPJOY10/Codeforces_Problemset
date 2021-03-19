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

bool palindrome(string s, int n, int k)
{
    rep(i, 0, k - 1)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (2 * k == n)
    {
        cout << "NO" << endl;
        return;
    }

    if (palindrome(s, n, k))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
