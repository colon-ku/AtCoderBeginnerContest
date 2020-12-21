// Link to the Problem
// https://atcoder.jp/contests/abc158/tasks/abc158_e

  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-07 21:43:11
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007

typedef long long LL;
typedef long double LD;

bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

ostringstream oss_global;
string s_global = oss_global.str();

int main()
{
    int n, p;
    string s;
    cin >> n >> p >> s;

    vector<int> mod(n);
    int x = 1;
    for (int i = 0; i < n; i++) {
        int y = (s[n-1-i]-'0') % p;
        mod[i] = (x*y) % p;

        x = (x * 10) % p;
    }
    reverse(all(mod));

    vector<int> u(n+1);
    u[n] = 0;
    for (int i = n-1; i >= 0; i--) {
        u[i] = (10*mod[i] + u[i+1]) % p;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int length = 1; i+length <= n-1; i++) {
            int temp = u[i] - u[i+length];
            if (temp % p == 0) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
