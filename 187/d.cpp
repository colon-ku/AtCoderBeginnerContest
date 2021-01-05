// Link to the Problem
// https://atcoder.jp/contests/abc187/tasks/abc187_d

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-01-05 21:38:46
    cleared at: 2021-01-05 21:57:04
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
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    long sum = 0l;
    for (int i = 0; i < n; i++) {
        sum += (long)a[i];
    }

    vector<long> c(n);
    for (int i = 0; i < n; i++) {
        c[i] = 2l*(long)a[i] + (long)b[i];
    }

    sort(all(c));

    long lose = -sum;
    int ans = 0;
    for (int i = n-1; lose <= 0; i--) {
        lose += c[i];
        ans++;
    }

    cout << ans << endl;

    return 0;
}
