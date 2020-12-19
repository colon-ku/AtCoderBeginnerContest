// Link to the Problem
// https://atcoder.jp/contests/abc179/tasks/abc179_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-03 17:42:01
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int a = 1; a <= n-1; a++) {
        int b_max = (int)(n/a);
        for (int b = a; b <= b_max; b++) {
            if (a*b <= n-1) {
                if (a == b) ans += 1;
                else ans += 2;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
