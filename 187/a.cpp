// Link to the Problem
// https://atcoder.jp/contests/abc187/tasks/abc187_a

/*
    バーチャル参加！！！！

    飲んだ魔剤で家が建つ。
    created at: 2021-01-05 21:10:00
    cleared at: 2021-01-05 21:12:16
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    string a, b;
    cin >> a >> b;

    int x, y;
    x = y = 0;

    for (int i = 0; i < 3; i++) {
        x += a[i] - '0';
        y += b[i] - '0';
    }

    cout << max(x, y) << endl;

    return 0;
}
