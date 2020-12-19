// Link to the Problem
// https://atcoder.jp/contests/abc186/tasks/abc186_d

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-19 21:12:24
    cleared at: 2020-12-19 22:11:13
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
    vector<long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(all(a));

    vector<long> x(n);
    x[0] = 1l - n;
    for (int i = 1; i < n; i++) {
        x[i] = 2 + x[i-1];
    }

    long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += x[i]*a[i];
    }

    cout << ans << endl;

    return 0;
}
