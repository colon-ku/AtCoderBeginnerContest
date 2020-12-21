/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-18 19:32:48
*/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007


int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    vector<bool> oks(n+1, true);
    for (int i = 0; i < m; i++)
        oks[a[i]] = false;

    vector<long> dp(n+1);
    dp[0] = 1;
    for (int now = 0; now < n; now++) {
        for (int next = now+1; next <= min(n, now+2); next++) {
            if (oks[next]) {
                dp[next] += dp[now];
                dp[next] %= MOD;
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}
