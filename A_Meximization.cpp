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
    int n;
    cin >> n;
    int a[n], freq[200];
    rep(i, 0, 199)
    {
        freq[i] = 0;
    }
    rep(i, 0, n - 1)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    int flag = 0;
    while (true)
    {
        flag = 0;
        rep(i, 0, 100)
        {
            if (freq[i] != 0)
            {
                cout << i << " ";
                freq[i]--;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
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
