# https://atcoder.jp/contests/abc167/tasks/abc167_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-10 21:04:02
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    int c[n], a[n][m];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = INF;
    for (long bit = 0; bit < (1<<n); bit++) {
        int sum = 0;
        int p[m] = {0};
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                sum += c[i];
                for (int j = 0; j < m; j++) {
                    p[j] += a[i][j];
                }
            }   
        }

        int ok = 1;
        for (int j = 0; j < m; j++) {
            if (p[j] < x) {
                ok = 0;
            }
        }

        if (ok && ans > sum) ans = sum;
    }

    if (ans == INF) cout << "-1" << endl;
    else cout << ans << endl;

    return 0;
}
