# https://atcoder.jp/contests/abc176/tasks/abc176_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-04 13:52:40
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
    long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long max = a[0];
    long ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < max) {
            ans += (max - a[i]);
        } else {
            max = a[i];
        }
    }

    cout << ans << endl;

    return 0;
}
