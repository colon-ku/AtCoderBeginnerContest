// Link to the Problem
// https://atcoder.jp/contests/abc197/tasks/abc197_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-04-11 19:52:05
    cleared at: 2021-04-11 20:35:50
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = INT_MAX;

    for (int div = 0; div < (1<<(n-1)); div++) {
        int par = 1;
        int temp = div;
        while (temp > 0) {
            par += temp % 2;
            temp /= 2;
        }

        vector<pair<int, int>> b(n);
        temp = 0;
        for (int i = 0; i < n; i++) {
            b[i].first = a[i];
            if ((div & (1<<i)) > 0) {
                b[i].second = temp++;
            } else {
                b[i].second = temp;
            }
        }

        vector<int> memo(par, 0);
        for (int i = 0; i < n; i++) {
            memo[b[i].second] = memo[b[i].second] | b[i].first;
        }

        temp = 0;
        for (int i = 0; i < par; i++) {
            temp = temp ^ memo[i];
        }

        if (ans > temp) ans = temp;
    }

    cout << ans << endl;

    return 0;
}
