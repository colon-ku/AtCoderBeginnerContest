// Link to the Problem
// https://atcoder.jp/contests/abc192/tasks/abc192_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-24 18:21:51
    cleared at: 2021-03-24 18:52:43
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
    int n, k;
    cin >> n >> k;

    int cur = n;
    for (int i = 0; i < k; i++) {
        string c_str = to_string(cur);
        sort(all(c_str));
        int g2 = stoi(c_str);
        reverse(all(c_str));
        int g1 = stoi(c_str);

        cur = g1 - g2;
    }

    cout << cur << endl;

    return 0;
}
