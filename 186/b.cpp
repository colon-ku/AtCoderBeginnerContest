// Link to the Problem
// https://atcoder.jp/contests/abc186/tasks/abc186_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-19 21:01:01
    cleared at: 2020-12-19 21:04:22
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int h, w;
    cin >> h >> w;
    int a[h][w];
    int min = INF;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
            if (min > a[i][j]) min = a[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            ans += (a[i][j] - min);
        }
    }

    cout << ans << endl;

    return 0;
}
