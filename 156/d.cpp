// Link to the Problem
// https://atcoder.jp/contests/abc156/tasks/abc156_d

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: ;2020-02-22 21:12:49
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

LL power(LL n, LL m) {
    if (m == 0) {
        return 1;
    } else if (m % 2 == 0) {
        LL p = power(n, m/2);
        return p*p % MOD;
    } else {
        return n*power(n, m-1) % MOD;
    }
}

LL modinv(LL n) {
    return power(n, MOD-2);
}

LL combination(LL n, LL r) {
    LL ret = 1;

    for (int i = 0; i < r; i++) {
        ret *= (n-i);
        ret %= MOD;
        ret *= modinv(i+1);
        ret %= MOD;
    }

    return ret;
}

int main()
{
    LL n, a, b;
    cin >> n >> a >> b;

    LL ans = power(2, n) - 1;
    ans -= combination(n, a);
    ans -= combination(n, b);

    for (; ans < 0; ans += MOD) {}

    cout << ans << endl;

    return 0;
}