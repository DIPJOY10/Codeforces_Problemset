//author: Dipjoy Basak
//dip_10,dipjoy_10

#include <bits/stdc++.h>
using namespace std;

// #define endl "\n"
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    //first k letters are not same
    if (s[0] != s[k - 1])
    {
        cout << s[k - 1] << endl;
        return;
    }
    //first k letters are same
    cout << s[k - 1];
    //rest letters are not same then append all to one
    if (k < n && s[k] != s[n - 1])
    {
        rep(i, k, n - 1)
        {
            cout << s[i];
        }
        cout << endl;
        return;
    }
    //rest all letters are same so distribute them evenly as possible
    rep(i, 1, (n - 1) / k)
    {
        cout << s[n - 1];
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}