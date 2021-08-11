// Link to the Problem
// https://atcoder.jp/contests/abc211/tasks/abc211_a

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-08-11 20:06:28
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    double a, b;
    cin >> a >> b;

    double ans = (a - b) / 3 + b;

    cout << ans << endl;

    return 0;
}
