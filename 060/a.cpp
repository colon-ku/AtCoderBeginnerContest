// Link to the Problem
// https://atcoder.jp/contests/abc060/tasks/abc060_a
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-19 15:47:45
    cleared at: 2020-12-19 15:49:27
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    if (a[a.length()-1] == b[0] && b[b.length()-1] == c[0]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
