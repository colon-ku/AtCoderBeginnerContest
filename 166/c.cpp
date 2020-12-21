// Link to the Problem
// https://atcoder.jp/contests/abc166/tasks/abc166_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-03 21:05:00
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
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    vector<int> a(m), b(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }

    vector<int> nog(n, 0);
    for (int i = 0; i < m; i++) {
        int h_a, h_b;
        h_a = h[a[i]-1];
        h_b = h[b[i]-1];

        if (h_a < h_b) {
            nog[a[i]-1] = 1;
        } else if (h_a == h_b) {
            nog[a[i]-1] = nog[b[i]-1] = 1;
        } else {
            nog[b[i]-1] = 1;
        }
    }

    int ans = n;
    for (int i = 0; i < n; i++) {
        ans -= nog[i];
    }

    cout << ans << endl;

    return 0;
}
