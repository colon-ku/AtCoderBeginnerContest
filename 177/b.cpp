// Link to the Problem
// https://atcoder.jp/contests/abc177/tasks/abc177_b
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-04 13:02:22
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    string s, t;
    cin >> s >> t;

    int n = s.length();
    int m = t.length();
    int ans = INF;
    for (int i = 0; i < n-m+1; i++) {
        string u = s.substr(i, m);
        int cnt = 0;
        for (int j = 0; j < m; j++) {
            if (t[j] != u[j]) {
                cnt++;
            }
        }

        if (ans > cnt) ans = cnt;
    }

    cout << ans << endl;

    return 0;
}
