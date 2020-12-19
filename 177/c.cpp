# https://atcoder.jp/contests/abc177/tasks/abc177_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-04 13:20:37
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 2000000000

int main()
{
    int n;
    cin >> n;
    long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long acc[n];
    acc[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--) {
        acc[i] = (acc[i+1] + a[i]) % MOD;
    }

    long ans = 0;
    for (int i = 0; i < n-1; i++) {
        ans = (ans + a[i]*acc[i+1]) % MOD;
    }

    ans = (ans + MOD) % MOD;
    cout << ans << endl;

    return 0;
}
