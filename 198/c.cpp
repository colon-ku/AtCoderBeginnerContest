// Link to the Problem
// https://atcoder.jp/contests/abc198/tasks/abc198_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-04-11 21:14:34
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

bool issq (LL x) {
    LL i;
    for (i = 0; x > 0; i++) {
        x -= i*2 + 1;
    }

    if (x == 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    LL r, x, y;
    cin >> r >> x >> y;

    LL s = x*x + y*y;
    LL ans;

    if (s == r*r) {
        ans = 1ll;
    } else if (s < r*r) {
        ans = 2ll;
    } else if (issq(s)) {
        if (rtceil(s) % r == 0) {
            ans = rtceil(s) / r;
        } else {
            ans = rtceil(s) / r + 1;
        }
    } else {
        ans = rtceil(s)/r + 1;
    }

    cout << ans << endl;

    return 0;
}
