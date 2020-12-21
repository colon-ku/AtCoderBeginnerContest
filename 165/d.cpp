// Link to the Problem
// https://atcoder.jp/contests/abc165/tasks/abc165_d

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-02 22:09:21
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    long a, b, n;
    cin >> a >> b >> n;

    long ans = 0;
    long x;
    if (b > n) {
        x = n;
    } else if (b == n) {
        x = n-1;
    } else {
        x = b*(n/b) - 1;
    }
    ans = a*x/b - a*(x/b);

    cout << ans << endl;

    return 0;
}
