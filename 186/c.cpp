// Link to the Problem
// https://atcoder.jp/contests/abc186/tasks/abc186_c

/*
    飲んだ魔剤で家が建つ。
    created at: 
    cleared at: 2020-12-19 21:12:20
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
    for (int x = 1; x <= n; x++) {
        bool deci, octa;
        deci = octa = false;
        // decimal
        int y = x;
        while (y > 0) {
            if (y % 10 == 7) {
                break;
            }

            y /= 10;
        }
        if (y == 0) deci = true;

        // octal
        y = x;
        while (y > 0) {
            if (y % 8 == 7) {
                break;
            }

            y /= 8;
        }
        if (y == 0) octa = true;

        if (deci && octa) {
            ans++;
            // cout << x << endl;
        }
    }

    cout << ans << endl;

    return 0;
}
