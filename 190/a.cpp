// Link to the Problem
// https://atcoder.jp/contests/abc190/tasks/abc190_a

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-20 14:44:28
    cleared at: 2021-03-20 14:47:05
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (c == 0) {
        if (a > b) {
            cout << "Takahashi" << endl;
        } else {
            cout << "Aoki" << endl;
        }
    } else {
        if (a < b) {
            cout << "Aoki" << endl;
        } else {
            cout << "Takahashi" << endl;
        }
    }

    return 0;
}
