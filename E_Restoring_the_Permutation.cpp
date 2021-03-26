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
    int n;
    cin >> n;
    int a[n];
    rep(i, 0, n - 1)
    {
        cin >> a[i];
    }
    int sm[n], lg[n];
    set<int> s1, s2;
    rep(i, 1, n)
    {
        s1.insert(i);
        s2.insert(-i);
    }

    int last = a[0];
    sm[0] = lg[0] = last;
    s1.erase(last);
    s2.erase(-last);
    //smallest permutation
    rep(i, 1, n - 1)
    {
        if (a[i] != a[i - 1])
        {
            sm[i] = a[i];
            s1.erase(a[i]);
        }
        else
        {
            auto it = s1.begin();
            sm[i] = *it;
            s1.erase(it);
        }
    }

    rep(i, 1, n - 1)
    {
        if (a[i] != a[i - 1])
        {
            lg[i] = a[i];
            s2.erase(-a[i]);
        }
        else
        {
            auto it = s2.lower_bound(-a[i]);
            lg[i] = -(*it);
            s2.erase(it);
        }
    }
    for (auto x : sm)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : lg)
    {
        cout << x << " ";
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
