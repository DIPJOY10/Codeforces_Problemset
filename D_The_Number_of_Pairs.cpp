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

const int N = 2e7 + 5;
vi primes(N);
vi cnt(N);

void sieve()
{
    for (int i = 2; i < N; i++)
    {
        if (primes[i])
        {
            for (int j = i; j < N; j += i)
            {
                primes[j] = 0;
                cnt[j]++;
            }
            primes[i] = 1;
        }
    }
}

ll calc(int c, int d, int x, int G)
{
    if (x % G)
        return -1;
    int p = d + (x / G);
    int num = p / c;
    if (p % c)
        return -1;
    return num;
}
void solve()
{
    int c, d, x;
    cin >> c >> d >> x;
    /*
    cL-dG=x
    x is a multiple of G.
    a/G and b/G are coprime.
    so c*y*z=d+(x/G)
    y*z=p/c
    p=d+(x/G)
    so p should be multiple of c.
    */

    //we iterate on the multiples of G and find x/G,add d to it and find modulo c.
    //then add 2^no. of distinct prime divisors of the resulting number.
    ll ans = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i)
            continue;
        int G1 = i, G2 = x / i;
        if (calc(c, d, x, G1) != -1)
            ans += ((ll)1 << cnt[calc(c, d, x, G1)]);
        if (calc(c, d, x, G2) != -1 && (G1 != G2))
            ans += ((ll)1 << cnt[calc(c, d, x, G2)]);
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    cin >> t;
    rep(i, 0, N - 1)
    {
        primes[i] = 1;
    }
    primes[0] = primes[1] = 0;
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}
