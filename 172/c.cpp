/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-08 09:53:14
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    long t, k;
    int n, m;
    cin >> n >> m >> k;
    vector<long> a, b;
    a.push_back(0);
    b.push_back(0);
    for (int i = 0; i < n; i++) {
        cin >> t;
        a.push_back(t + a[i]);
    }
    for (int i = 0; i < m; i++) {
        cin >> t;
        b.push_back(t + b[i]);
    }

    int ans = 0;
    int j = m;
    for (int i = 0; i <= n; i++) {
        if (a[i] > k) {
            break;
        }

        while (b[j] > k - a[i]) {
            j -= 1;
        }

        ans = max(ans, i+j);
    }

    cout << ans << endl;

    return 0;
}
