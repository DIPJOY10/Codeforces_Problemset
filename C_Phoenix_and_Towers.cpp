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

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    vpi v(n);
    rep(i, 0, n - 1)
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());

    vector<int> sum(m, 0);
    // debug(sum);
    if (m < n)
    {
        int idx = n - m - 1;
        int cnt = m - 1;
        vector<int> ans(n);
        rrep(i, n - 1, n - m)
        {
            ans[v[i].second] = cnt + 1;
            sum[cnt--] = v[i].first;
        }
        cnt = 0;
        // debug(idx);
        int mn = INT_MAX, mx = -1;
        rrep(i, idx, 0)
        {
            ans[v[i].second] = cnt + 1;
            sum[cnt++] += v[i].first;
            if (cnt >= m)
                cnt %= m;
        }
        // debug(sum);
        rep(i, 0, m - 1)
        {
            mn = min(sum[i], mn);
            mx = max(sum[i], mx);
        }

        if (mx - mn <= x)
        {
            cout << "YES" << endl;
            rep(i, 0, n - 1)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    else if (m == n)
    {
        if (v[n - 1].first - v[0].first <= x)
        {
            cout << "YES" << endl;
            rep(i, 0, n - 1)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
