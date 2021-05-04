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
    int n, k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    int c1[26] = {0}, c2[26] = {0};
    rep(i, 0, n - 1)
    {
        c1[a[i] - 'a']++;
    }
    rep(i, 0, n - 1)
    {
        c2[b[i] - 'a']++;
    }

    rep(i, 0, 25)
    {
        int cmn = min(c1[i], c2[i]);
        c1[i] -= cmn;
        c2[i] -= cmn;
    }
    int sum1 = 0, sum2 = 0;
    rep(i, 0, 25)
    {
        if (c1[i] % k || c2[i] % k)
        {
            cout << "No" << endl;
            return;
        }
        sum1 += c1[i];
        sum2 += c2[i];
    }
    if (sum1 != sum2)
    {
        cout << "No" << endl;
        return;
    }

    rep(i, 0, 25)
    {
        if (c1[i] != 0)
        {
            int req = c1[i];
            rep(j, i + 1, 25)
            {
                if (c2[j] != 0 && req != 0)
                {
                    int found = c2[j];
                    if (found >= req)
                    {
                        c2[j] -= req;
                        req = 0;
                    }
                    else
                    {
                        req -= found;
                        c2[j] = 0;
                    }
                }
            }
            if (req != 0)
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
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
