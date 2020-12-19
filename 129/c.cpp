// Link to the Problem
// https://atcoder.jp/contests/abc129/tasks/abc129_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-18 18:43:01
                2020-04-18 19:31:28 余計なものを取り除いた版
*/

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

typedef unsigned long ul;

map<int, long> memo;

long fib(int n)
{
    if (n >= 2 && memo[n] > 0) return memo[n];
    else if (n >= 2) return memo[n] = fib(n-1)%MOD + fib(n-2)%MOD;
    else return memo[n];
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    memo[-1] = 0;   //上ることができない
    memo[0] = 1;    //そのままジャンプするだけ
    memo[1] = 1;

    long ans;
    if (m == 0) {
        ans = fib(n)%MOD;
    } else {
        ans = (fib(a[0]-1)*fib(n-a[m-1]-1))%MOD;
        for (int i = 1; i < m; i++) {
            int A = a[i] - a[i-1];
            ans *= fib(A-2);
            ans %= MOD;
        }
    }

    cout << ans << endl;

    return 0;
}
