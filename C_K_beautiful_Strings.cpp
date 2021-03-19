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

int count(int cnt, int k)
{
    int temp = k - (cnt % k);
    if (temp == k)
        return 0;
    return temp;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int freq[26];
    rep(i, 0, 25)
    {
        freq[i] = 0;
    }
    rep(i, 0, n - 1)
        freq[s[i] - 'a']++;
    int sum = 0;
    rep(i, 0, 25)
    {
        sum += count(freq[i], k);
    }

    if (sum == 0)
    {
        cout << s << endl;
        return;
    }

    if (n % k)
    {
        cout << -1 << endl;
        return;
    }
    //traversing all common prefixes
    int found = 0;
    rrep(i, n - 1, 0)
    {
        if (found)
            break;
        //calculating reqd. sum when deleting the ith char.
        sum -= count(freq[s[i] - 'a'], k);
        freq[s[i] - 'a']--;
        sum += count(freq[s[i] - 'a'], k);
        rep(j, s[i] - 'a' + 1, 25)
        {
            int isum = sum;
            sum -= count(freq[j], k);
            freq[j]++;
            sum += count(freq[j], k);
            if (i + 1 + sum <= n)
            {
                //print the prefix excluding ith char.
                rep(pos, 0, i - 1)
                {
                    cout << s[pos];
                }
                cout << (char)(j + 'a');
                string suffix = "";
                if (i + 1 + sum < n)
                {
                    rep(pos, 1, n - i - 1 - sum)
                    {
                        suffix += 'a';
                    }
                }
                rep(pos, 0, 25)
                {
                    int required = count(freq[pos], k);
                    while (required--)
                    {
                        suffix += (char)(pos + 'a');
                    }
                }
                cout << suffix << endl;
                found = 1;
                break;
            }
            freq[j]--;
            sum = isum;
        }
    }
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