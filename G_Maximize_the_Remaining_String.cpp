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
    string s;
    cin >> s;
    //without stack
    //but approach is same.
    map<int, int> mp; //storing the last indices of each occuring element
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i] - 'a'] = i;
    }
    bool vis[26] = {false};
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (vis[s[i] - 'a'])
            continue;
        while (res.length() > 0 && res.back() < s[i] && mp[res.back() - 'a'] > i)
        {
            vis[res.back() - 'a'] = false;
            res.pop_back();
        }
        vis[s[i] - 'a'] = true;
        res += s[i];
    }
    cout << res << endl;
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
