# https://atcoder.jp/contests/abc180/tasks/abc180_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-02 22:55:45
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    long n;
    cin >> n;

    vector<long> ans;

    for (long i = 1; i*i <= n; i++) {
        if (i*i == n) {
            ans.push_back(i);
        } else if (n % i == 0) {
            ans.push_back(i);
            ans.push_back(n/i);
        }
    }

    sort(all(ans));

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}
