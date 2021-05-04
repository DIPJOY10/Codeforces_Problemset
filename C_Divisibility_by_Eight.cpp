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

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    //n<=100 so brute force over the three digits.

    for (int i = 0; i < n; i++)
    {
        //any digit is divisible
        if (s[i] % 8 == 0)
        {
            cout << "YES" << endl;
            cout << s[i] << endl;
            return;
        }
        for (int j = i + 1; j < n; j++)
        {
            //all possible two digit numbers
            int nm = (s[i] - '0') * 10 + (s[j] - '0');
            if (nm % 8 == 0)
            {
                cout << "YES" << endl;
                cout << nm << endl;
                return;
            }
            for (int k = j + 1; k < n; k++)
            {
                //all possible three digit numbers formed
                int num = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (num % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << num << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}
int32_t main()
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
