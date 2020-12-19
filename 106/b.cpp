# https://atcoder.jp/contests/abc106/tasks/abc106_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-04 16:15:55
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
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i += 2) {
        int cnt = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) cnt++;
        }

        if (cnt == 8) ans++;
    }

    cout << ans << endl;
    return 0;
}
