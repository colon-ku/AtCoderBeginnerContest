/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-06 21:43:01
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    long d;
    cin >> n >> d;
    long x[n], y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    long dd = d*d;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        long xx = x[i]*x[i];
        long yy = y[i]*y[i];

        if (dd >= xx + yy) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
