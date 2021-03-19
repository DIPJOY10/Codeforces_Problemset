//author: Dipjoy Basak
//dip_10,dipjoy_10

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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char c = 'z', mx = 'a';
    vector<int> arr(26);
    rep(i, 0, n - 1)
    {
        c = min(c, s[i]);
        mx = max(mx, s[i]);
        arr[s[i] - 'a']++;
    }
    string ans = "";
    rep(i, 0, min(k - 1, n - 1))
    {
        ans += s[i];
    }

    if (k > n)
    {
        rep(i, n, k - 1)
            ans += c;
        cout << ans << endl;
        return;
    }
    int i;
    rrep(j, min(k - 1, n - 1), 0)
    {
        if (ans[j] != mx)
        {
            i = j;
            break;
        }
        ans[j] = c;
    }

    int pos = s[i] - 'a';
    rep(j, pos + 1, 25)
    {
        if (arr[j] != 0)
        {
            ans[i] = (char)('a' + j);
            break;
        }
    }
    cout << ans << endl;
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