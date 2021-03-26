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
    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string arr2[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    if (n == 0)
    {
        cout << "zero" << endl;
    }
    else if (n >= 1 && n <= 9)
    {
        cout << arr[n - 1] << endl;
    }
    else if (n >= 10 && n <= 19)
    {
        string a[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        cout << a[n - 10] << endl;
    }
    else
    {
        cout << arr2[n / 10 - 2];
        if (n % 10 != 0)
            cout << "-" << arr[n % 10 - 1] << endl;
    }
}
int main()
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
