// Link to the Problem
// https://atcoder.jp/contests/abc072/tasks/arc082_a

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-30 23:59:59
    cleared at: 2020-12-31 00:21:13
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

    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        cnt[a[i]-1]++;
        cnt[a[i]]++;
        cnt[a[i]+1]++;
    }

    int ans = -INF;
    for (auto x : cnt) {
        if (ans < x.second) ans = x.second;
    }

    cout << ans << endl;

    return 0;
}
