// Link to the Problem
// https://atcoder.jp/contests/abc197/tasks/abc197_a

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-04-11 19:20:49
    cleared at: 2021-04-11 19:21:59
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
    string s;
    cin >> s;

    s = (s + s[0]).substr(1);

    cout << s << endl;

    return 0;
}
