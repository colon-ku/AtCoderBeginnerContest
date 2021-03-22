// Link to the Problem
// https://atcoder.jp/contests/abc191/tasks/abc191_a

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-22 17:28:52
    cleared at: 2021-03-22 17:32:03
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
    int v, t, s, d;
    cin >> v >> t >> s >> d;

    if (v*t > d || v*s < d) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
