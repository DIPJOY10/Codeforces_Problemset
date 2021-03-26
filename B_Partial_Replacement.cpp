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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int pos;
    int cnt1 = 1, cnt2 = 1;
    string temp = s;
    //from front
    rep(i, 0, n - 1)
    {
        if (s[i] == '*')
        {
            pos = i;
            break;
        }
    }
    int i = pos;
    while (i < n)
    {
        int temp = i + k;
        if (temp >= n)
            break;
        int flag = 1;
        while (temp < n && temp > i)
        {
            if (s[temp] == '*')
            {
                pos = temp;
                flag = 0;
                cnt1++;
                break;
            }
            temp--;
        }
        if (flag)
            break;
        i = temp;
    }

    rrep(i, n - 1, pos + 1)
    {
        if (s[i] == '*')
        {
            cnt1++;
            break;
        }
    }
    //from back
    rrep(i, n - 1, 0)
    {
        if (s[i] == '*')
        {
            pos = i;
            break;
        }
    }
    i = pos;
    while (i >= 0)
    {
        int temp = i - k;
        if (temp < 0)
            break;
        int flag = 1;
        while (temp >= 0 && temp < i)
        {
            if (s[temp] == '*')
            {
                pos = temp;
                flag = 0;
                cnt2++;
                break;
            }
            temp++;
        }
        if (flag)
            break;
        i = temp;
    }
    rep(i, 0, pos - 1)
    {
        if (s[i] == '*')
        {
            cnt2++;
            break;
        }
    }
    cout << min(cnt1, cnt2) << endl;
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
