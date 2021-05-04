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

void solve()
{
    //best implementation
    int n;
    cin >> n;
    char s[n][n];
    int changes[3] = {0};
    rep(i, 0, n - 1)
    {
        rep(j, 0, n - 1)
        {
            cin >> s[i][j];
        }
    }

    rep(i, 0, n - 1)
    {
        rep(j, 0, n - 1)
        {
            int board = (i + j) % 3;
            if (s[i][j] == 'X')
            {
                changes[board]++;
            }
        }
    } //min_element returns an iterator pointing to the minimum element in a range.
    int mn = min_element(changes, changes + 3) - changes;

    rep(i, 0, n - 1)
    {
        rep(j, 0, n - 1)
        {
            if (s[i][j] == '.')
            {
                cout << '.';
            }
            else if ((i + j) % 3 == mn)
            {
                cout << 'O';
            }
            else
            {
                cout << 'X';
            }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
