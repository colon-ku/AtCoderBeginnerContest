// Link to the Problem
// https://atcoder.jp/contests/abc100/tasks/abc100_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-23 22:37:42
    cleared at: 2020-12-23 22:46:01
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int invpow (int x) {
    int ret;

    for (ret = 0; x%2 == 0; x /= 2) {
        ret++;
    }

    return ret;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += invpow(a[i]);
    }

    cout << ans << endl;

    return 0;
}
