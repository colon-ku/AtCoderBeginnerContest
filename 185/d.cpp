// Link to the Problem
// https://atcoder.jp/contests/abc185/tasks/abc185_d

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-13 22:16:05
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m+1, 0);
    for (int i = 1; i <= m; i++) {
        cin >> a[i];
    }

    sort(all(a));

    if (m == 0) {
        cout << 1 << endl;
        return 0;
    }

    set<int> t;
    int b;
    for (int i = 1; i <= m; i++) {
        b = a[i] - a[i-1] - 1;
        if (b >= 1) {
            t.insert(b);
        }
    }

    b = n - a[m];
    if (b >= 1) {
        t.insert(b);
    }

    int k = *t.begin();

    if (k == 1) {
        cout << n-m << endl;
        return 0;
    }

    int ans = 0;
    for (auto x : t) {
        if (x % k == 0) {
            ans += x/k;
        } else {
            ans += x/k + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
