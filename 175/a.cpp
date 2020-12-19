# https://atcoder.jp/contests/abc175/tasks/abc175_a
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-06 19:24:00
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] == 'R') {
            if (ans < ++cnt) ans = cnt;
        } else {
            cnt = 0;
        }
    }

    cout << ans << endl;

    return 0;
}
