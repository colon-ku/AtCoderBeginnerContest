// Link to the Problem
// https://atcoder.jp/contests/abc196/tasks/abc196_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-20 21:05:49
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, m;
    cin >> n;
    m = n;
    int digits = 0;
    while (m > 0) {
        digits++;
        m /= 10;
    }

    int ans = 0;
    for (long x = 11l; (x <= n && x <= 99l); x += 11l) {
        // cout << x << endl;
        ans++;
    }
    for (long x = 1010l; (x <= n && x <= 9999l); x += 101l) {
        // cout << x << endl;
        ans++;
    }
    for (long x = 100100l; (x <= n && x <= 999999l); x += 1001l) {
        // cout << x << endl;
        ans++;
    }
    for (long x = 10001000l; (x <= n && x <= 99999999l); x += 10001l) {
        // cout << x << endl;
        ans++;
    }
    for (long x = 1000010000l; (x <= n && x <= 9999999999l); x += 100001l) {
        // cout << x << endl;
        ans++;
    }
    for (long x = 100000100000l; (x <= n && x <= 999999999999l); x += 1000001l) {
        ans++;
    }

    cout << ans << endl;

    return 0;
}
