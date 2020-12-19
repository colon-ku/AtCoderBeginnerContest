// Link to the Problem
// https://atcoder.jp/contests/abc171/tasks/abc171_b
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-09 17:57:52
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(all(p));

    int ans = 0;
    for (int i = 0; i < k; i++) {
        ans += p[i];
    }

    cout << ans << endl;

    return 0;
}
