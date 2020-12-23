// Link to the Problem
// https://atcoder.jp/contests/abc050/tasks/arc066_a

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-23 11:23:14
    cleared at: 2020-12-23 11:37:36
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(all(a));

    bool ok = true;
    if (n % 2 == 0) {
        // 1, 1, 3, 3, 5, 5, ...
        for (int i = 0; i < n/2; i++) {
            if (a[2*i] != a[2*i+1]) ok = false;
        }
    } else {
        // 0, 2, 2, 4, 4, 6, 6, ...
        if (a[0] != 0) ok = false;
        for (int i = 0; i < (n-1)/2; i++) {
            if (a[2*i+1] != a[2*(i+1)]) ok = false;
        }
    }

    int ans = 0;
    if (ok) {
        if (n % 2 == 0) {
            ans = 1;
            for (int i = 0; i < n/2; i++) {
                ans = (2 * ans) % MOD;
            }
        } else {
            ans = 1;
            for (int i = 0; i < (n-1)/2; i++) {
                ans = (2 * ans) % MOD;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
