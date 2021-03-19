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
    string s;
    cin >> s;
    int n = s.length();
    char c = s[0], c2 = s[n - 1];
    string st = s;
    if (c == c2)
    {
        cout << "NO" << endl;
        return;
    }
    rep(i, 0, n - 1)
    {
        if (s[i] == c)
            st[i] = '(';
    }
    rep(i, 0, n - 1)
    {
        if (s[i] == c2)
        {
            st[i] = ')';
        }
    }
    char ch = '(';
    int flag = 1;
    rep(j, 0, 1)
    {
        if (ch == '(')
            ch = ')';
        else
            ch = '(';
        rep(i, 0, n - 1)
        {
            if (s[i] != c && s[i] != c2)
            {
                st[i] = ch;
            }
        }
        stack<int> stk;
        flag = 1;
        rep(i, 0, n - 1)
        {
            if (st[i] == '(')
                stk.push(st[i]);
            else
            {
                if (!stk.empty() && stk.top() == '(')
                {
                    stk.pop();
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1 && stk.empty())
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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