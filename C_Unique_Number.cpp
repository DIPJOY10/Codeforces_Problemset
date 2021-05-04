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

bool sum(int n, int x)
{
    int s = 0;
    set<int> st;
    st.clear();
    while (n > 0)
    {

        s += (n % 10);
        int sz = st.size();
        st.insert(n % 10);
        if (sz == st.size())
        {
            return false;
        }
        n /= 10;
    }
    if (x == s)
        return true;
    return false;
}

void solve()
{
    int x;
    cin >> x;
    set<int> st;
    rep(i, 1, 9)
    {
        st.insert(i);
    }
    string s = "";
    while (x != 0)
    {
        int flag = 1;
        for (auto it = st.end(); it != st.begin(); it--)
        {
            if (*it <= x)
            {
                s += (char)('0' + *it);
                x -= *it;
                st.erase(it);
                flag = 0;
                break;
            }
        }
        if (flag && x != 0)
        {
            if (*st.begin() == x)
            {
                s += (char)('0' + *st.begin());
                x = 0;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    sort(s.begin(), s.end());
    cout << s << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << setprecision(15) << fixed;
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
