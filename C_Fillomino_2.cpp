//Hare Krishna
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
#define first ff
#define second ss
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#define maxn 1000005
#define INF INT_MAX

void _print(int t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(ld t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

//---------------------------------------------------------------------------------------------------------------------------------------
int flag = 0;
void helper(int cnt, int fill, int **ans, int i, int j, int n)
{
    if (cnt == 0)
    {
        return;
    }
    if (i < n - 1 && ans[i + 1][j] == 0)
    {
        ans[i + 1][j] = fill;
        helper(cnt - 1, fill, ans, i + 1, j, n);
    }
    else if (j > 0 && ans[i][j - 1] == 0)
    {
        ans[i][j - 1] = fill;
        helper(cnt - 1, fill, ans, i, j - 1, n);
    }
    else if (cnt != 0)
    {
        flag = 1;
        return;
    }
}

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int **ans = new int *[n];
    rep(i, 0, n - 1)
    {
        cin >> a[i];
        ans[i] = new int[n];
        ans[i][i] = a[i];
    }

    rep(i, 0, n - 1)
    {
        rep(j, 0, n - 1)
        {
            if (i != j)
                ans[i][j] = 0;
            // cout << ans[i][j] << " ";
        }
        // cout << endl;
    }
    rrep(i, n - 1, 0)
    {
        int cnt = a[i] - 1;
        // debug(i);
        helper(cnt, a[i], ans, i, i, n);
        // debug(flag);
        if (flag)
        {
            cout << -1 << endl;
            return;
        }
    }

    rep(i, 0, n - 1)
    {
        rep(j, 0, i)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
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
