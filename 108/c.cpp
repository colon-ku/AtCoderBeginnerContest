# https://atcoder.jp/contests/abc108/tasks/abc108_c
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-03 18:27:10
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
    LL n, k;
    cin >> n >> k;

    LL x, y;
    
    x = y = 0;
    for (LL i = 1; i <= n; i++) {
        if (i % k == 0) x++;
        if (i % k == k/2) y++;
    }

    LL ans = x * x * x;

    if (k % 2 == 0) ans += y * y * y;

    cout << ans << endl;
    return 0;
}
