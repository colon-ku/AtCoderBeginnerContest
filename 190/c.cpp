// Link to the Problem
// https://atcoder.jp/contests/abc190/tasks/abc190_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-20 14:50:03
    cleared at: 2021-03-20 15:10:40
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }
    int k;
    cin >> k;
    vector<int> c(k), d(k);
    for (int i = 0; i < k; i++) {
        cin >> c[i] >> d[i];
    }

    int ans = 0;
    for (int bit = 0; bit < (1<<k); bit++) {
        int cit = bit;
        int w[k];
        for (int i = 0; i < k; i++) {
            w[i] = cit % 2;
            cit /= 2;
        }

        vector<int> ba(n);
        for (int i = 0; i < k; i++) {
            if (w[i] == 0) {
                ba[c[i]-1]++;
            } else {
                ba[d[i]-1]++;
            }
        }

        int cnt = 0;
        for (int j = 0; j < m; j++) {
            if (ba[a[j]-1] >= 1 && ba[b[j]-1] >= 1) {
                cnt++;
            }
        }

        if (ans < cnt) {
            ans = cnt;

            // for (int i = 0; i < k; i++) {
            //     cout << w[i] << " ";
            // }
            // cout << endl;
            // for (int u = 0; u < n; u++) {
            //     cout << ba[u] << " ";
            // }
            // cout << endl << endl;
        }
    }

    cout << ans << endl;

    return 0;
}
