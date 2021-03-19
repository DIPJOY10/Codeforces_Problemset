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
    ll n;
    cin >> n;

    //O(n) using difference array and prefix sum
    vector<ll> S(n), prefix(n + 2);
    ll ans = 0, curr = 0;
    rep(i, 0, n - 1)
    {
        cin >> S[i];
    }

    rep(i, 0, n - 1)
    {
        if (i > 0)
            prefix[i] += prefix[i - 1];
        if (prefix[i] < S[i] - 1)
        {
            ans += S[i] - 1 - prefix[i];
        }
        else
        {
            prefix[i + 1] += prefix[i] - S[i] + 1;
            prefix[i + 2] -= prefix[i] - S[i] + 1;
        }
        if (S[i] > 1)
        {
            prefix[i + 2]++;
            if (i + S[i] < n)
            {
                prefix[i + S[i] + 1]--;
            }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}