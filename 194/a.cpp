// Link to the Problem
// https://atcoder.jp/contests/abc194/tasks/abc194_a

/*
    飲んだ魔剤で家が建つ。
    created at: 
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
    int a, b;
    cin >> a >> b;

    a += b;

    int ans;
    if (a >= 15 && b >= 8) ans = 1;
    else if (a >= 10 && b >= 3) ans = 2;
    else if (a >= 3) ans = 3;
    else ans = 4;

    cout << ans << endl;

    return 0;
}
