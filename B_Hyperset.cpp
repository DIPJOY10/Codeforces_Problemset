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

void solve()
{
    int n, k;
    cin >> n >> k;
    map<string, int> mp;
    string arr[n];
    rep(i, 0, n - 1)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    char ch[] = {'S', 'T', 'E'};
    int ans = 0;
    rep(i, 0, n - 1)
    {
        string fst = arr[i];
        rep(j, i + 1, n - 1)
        {
            string snd = arr[j];
            string third = "";
            rep(idx, 0, k - 1)
            {
                if (fst[idx] == snd[idx])
                {
                    third += fst[idx];
                }
                else
                {
                    rep(t, 0, 2)
                    {
                        if (fst[idx] != ch[t] && snd[idx] != ch[t])
                        {
                            third += ch[t];
                            break;
                        }
                    }
                }
            }
            if (mp.find(third) != mp.end())
            {
                ans++;
            }
        }
    }
    cout << ans / 3 << endl;
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
