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
#define ff first
#define ss ssecond
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define rrep(i, r, l) for (int i = r; i >= l; i--)
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x) ;
#endif
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

bool check(string s)
{
    int cnt = 0;
    rep(i, 0, s.size() - 1)
    {
        if (s[i] == '4')
            cnt++;
        else
            cnt--;
    }
    if (cnt)
        return false;
    return true;
}
void solve()
{
    string n;
    cin >> n;
    int len = n.size(), cnt = 2;
    string s = "";
    while (true)
    {
        s = "";
        rep(i, 1, cnt / 2)
        {
            s += '4';
        }
        rep(i, 1, cnt / 2)
        {
            s += '7';
        }
        if (cnt < len)
        {
            cnt += 2;
            continue;
        }
        if (cnt > len)
        {
            cout << s << endl;
            break;
        }
        do
        {
            if (s >= n)
            {
                cout << s << endl;
                return;
            }
            if (cnt == 10)
            {
                cout << s << endl;
            }
        } while (next_permutation(s.begin(), s.end()));
        cnt += 2;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << setprecision(15) << fixed;
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
