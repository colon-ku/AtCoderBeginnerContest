// Link to the Problem
// https://atcoder.jp/contests/abc192/tasks/abc192_a

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-24 18:15:18
    cleared at: 2021-03-24 18:17:52
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
    int x;
    cin >> x;

    cout << 100 - x + (x/100)*100 << endl;

    return 0;
}
