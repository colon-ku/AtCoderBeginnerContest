// Link to the Problem
// https://atcoder.jp/contests/abc185/tasks/abc185_b
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-13 21:01:25
    cleared at: 2020-12-13 21:18:20
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, m, t;
    cin >> n >> m >> t;
    int a[m+1], b[m+1];
    for (int i = 1; i <= m; i++) {
        cin >> a[i] >> b[i];
    }

    int rem = n - a[1];
    bool ans = (rem > 0);

    for (int i = 1; i <= 2*m; i++) {
        if (i % 2 != 0) {
            rem += (b[i/2+1] - a[i/2+1]);
        } else if (i < 2*m) {
            rem -= (a[i/2+1] - b[i/2]);
        } else {
            rem -= (t - b[m]);
        }

        rem = min(rem, n);

        ans = (ans && rem > 0);

        // cout << rem << endl;
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
