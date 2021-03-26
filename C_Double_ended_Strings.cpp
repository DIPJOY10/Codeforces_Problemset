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
    string a, b;
    cin >> a >> b;
    int len1 = (int)a.length(), len2 = (int)b.length();
    int max1 = 0;
    rep(i, 0, len1 - 1)
    {
        string temp = "";
        rep(j, i, len1 - 1)
        {
            temp += a[j];
            //search
            rep(k, 0, len2 - 1)
            {
                string temp2 = "";
                rep(p, k, len2 - 1)
                {
                    temp2 += b[p];
                    if (temp == temp2)
                    {
                        max1 = max(max1, (int)temp.length());
                        break;
                    }
                }
            }
        }
    }
    rep(i, 0, len2 - 1)
    {
        string temp = "";
        rep(j, i, len2 - 1)
        {
            temp += b[j];
            //search
            rep(k, 0, len1 - 1)
            {
                string temp2 = "";
                rep(p, k, len1 - 1)
                {
                    temp2 += a[p];
                    if (temp == temp2)
                    {
                        max1 = max(max1, (int)temp.length());
                        break;
                    }
                }
            }
        }
    }
    cout << len1 + len2 - 2 * max1 << endl;
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
