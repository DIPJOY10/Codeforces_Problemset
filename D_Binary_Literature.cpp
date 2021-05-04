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

int n;

string helper(string s, string t, char ch)
{
    string ans = "";
    //the strings have at least n length as a common subsequence with character ch
    //store the indexes of the character ch in both the strings

    vector<int> idx1 = {-1}, idx2 = {-1};

    for (int i = 0; i < 2 * n; i++)
    {
        if (s[i] == ch)
            idx1.pb(i);
        if (t[i] == ch)
            idx2.pb(i);
    }

    //we need only n common characters for length to be max 3n
    rep(i, 0, n - 1)
    {
        rep(j, idx1[i] + 1, idx1[i + 1] - 1)
        {
            ans += s[j];
        }
        rep(j, idx2[i] + 1, idx2[i + 1] - 1)
        {
            ans += t[j];
        }
        ans += ch;
    }
    //add the remaining part as it is after n common characters.
    rep(i, idx1[n] + 1, 2 * n - 1)
        ans += s[i];
    rep(i, idx2[n] + 1, 2 * n - 1)
        ans += t[i];
    return ans;
}

void solve()
{
    cin >> n;
    string s;
    vector<string> v0, v1;
    rep(i, 0, 2)
    {
        cin >> s;
        int cnt0 = 0;
        //finding the character occurring more than n times.
        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == '0')
                cnt0++;
        }

        if (cnt0 >= n)
        {
            v0.pb(s);
        }
        else
        {
            v1.pb(s);
        }
    }

    if (v0.size() >= 2)
    {
        // cout << v0[0] << " " << v0[1] << endl;
        cout << helper(v0[0], v0[1], '0') << endl;
    }
    else
    {
        // cout << v1[0] << " " << v1[1] << endl;
        cout << helper(v1[0], v1[1], '1') << endl;
    }
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
