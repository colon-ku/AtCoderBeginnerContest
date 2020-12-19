// Link to the Problem
// https://atcoder.jp/contests/abc157/tasks/abc157_c
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-01 21:20:31
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
    int n, m;
    cin >> n >> m;
    vector<int> s(m), c(m);
    for (int i = 0; i < m; i++) {
        cin >> s[i] >> c[i];
    }

    int bot, top;
    if (n == 1) {
        bot = 0; top = 9;
    } else {
        bot = pow(10, n-1);
        top = pow(10, n) - 1;
    }

    int ans;
    for (ans = bot; ans <= top+1; ans++) {
        if (ans == top+1) {
            ans = -1;
            break;
        }
        vector<int> dig(n);
        int temp = ans;
        for (int i = 0; i < n; i++) {
            dig[i] = temp % 10;
            temp /= 10;
        }
        reverse(all(dig));

        int ok = 1;
        for (int i = 0; i < m; i++) {
            if (dig[s[i]-1] != c[i]) {
                ok = 0;
            }
        }

        if (ok) {
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
