# https://atcoder.jp/contests/abc178/tasks/abc178_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-03 18:46:48
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    cin >> n;

    long long a, b, c;
    a = b = c = 1;

    for (int i = 0; i < n; i++) {
        a = (10*a) % MOD;
        b = (9*b) % MOD;
        c = (8*c) % MOD;
    }

    long long ans = (a - 2*b + c) % MOD;
    ans = (ans + MOD) % MOD;

    cout << ans << endl;

    return 0;
}
