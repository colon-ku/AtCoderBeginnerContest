// Link to the Problem
// https://atcoder.jp/contests/abc175/tasks/abc175_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-06 21:02:49
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    long x, k, d;
    cin >> x >> k >> d;

    long final;
    if (x >= 0) {
        long n = min(k, x/d);
        k -= n;
        x -= n*d;

        if (k % 2 == 0) final = x;
        else final = x - d;
    } else {
        long n = min(k, -x/d);
        k -= n;
        x += n*d;

        if (k % 2 == 0) final = x;
        else final = x + d;
    }

    cout << abs(final) << endl;

    return 0;
}
