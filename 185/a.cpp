# https://atcoder.jp/contests/abc185/tasks/abc185_a
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-13 20:58:41
    cleared at: 2020-12-13 21:01:20
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    int min = INF;
    for (int i = 0; i < 4; i++) {
        if (min > a[i]) min = a[i];
    }

    cout << min << endl;

    return 0;
}
