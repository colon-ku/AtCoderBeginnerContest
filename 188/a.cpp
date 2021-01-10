// Link to the Problem
// https://atcoder.jp/contests/abc188/tasks/abc188_a

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-01-11 00:45:25
    cleared at: 2021-01-11 00:46:48
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int x, y;
    cin >> x >> y;

    if (min(x, y) + 3 > max(x, y)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
