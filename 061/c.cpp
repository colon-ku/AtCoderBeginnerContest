// Link to the Problem
// https://atcoder.jp/contests/abc061/tasks/abc061_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-31 00:23:19
    cleared at: 2020-12-31 00:52:19
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    long k;
    cin >> n >> k;
    vector<int> a(n);
    vector<long> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    map<int, long> cnt;
    for (int i = 0; i < n; i++) {
        cnt[a[i]] += b[i];
    }

    for (auto x : cnt) {
        if (k <= x.second) {
            cout << x.first << endl;
            return 0;
        } else {
            k -= x.second;
        }
    }

    return 0;
}
