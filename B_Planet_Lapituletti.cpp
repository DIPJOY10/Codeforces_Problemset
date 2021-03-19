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

int m, h;

bool reflect(int hh, int mm)
{
    int arr[] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
    if (arr[hh % 10] == -1 || arr[hh / 10] == -1 || arr[mm / 10] == -1 || arr[mm % 10] == -1)
    {
        return 0;
    }
    int tm = (arr[hh % 10] * 10) + arr[hh / 10], th = (arr[mm % 10] * 10) + arr[mm / 10];
    return (tm < m) && (th < h);
}
void solve()
{
    cin >> h >> m;
    int th, tm;
    string s;
    cin >> s;
    th = (s[0] - '0') * 10 + s[1] - '0';
    tm = (s[3] - '0') * 10 + s[4] - '0';
    //brute force through all times until both th and tm==0
    while (th != 0 || tm != 0)
    {
        if (reflect(th, tm))
        {
            break;
        }
        tm++;
        if (tm == m)
        {
            tm = 0;
            th++;
        }
        if (th == h)
        {
            th = 0;
        }
    }
    printf("%02d:%02d\n", th, tm);
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