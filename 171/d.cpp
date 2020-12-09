/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-09 18:49:27
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, q;
    cin >> n;
    long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> q;
    long b[q], c[q];
    for (int i = 0; i < q; i++) {
        cin >> b[i] >> c[i];
    }

    // end input

    long ans = 0;
    map<long, long> cnt;
    for (int i = 0; i < n; i++) {
        ans += a[i];
        cnt[a[i]]++;
    }

    for (int i = 0; i < q; i++) {
        long diff = cnt[b[i]] * (c[i]-b[i]);
        cnt[c[i]] += cnt[b[i]];
        cnt[b[i]] = 0l;

        ans += diff;
        cout << ans << endl;
    }

    return 0;
}
