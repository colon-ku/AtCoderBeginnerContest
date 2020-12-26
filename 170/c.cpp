// Link to the Problem
// https://atcoder.jp/contests/abc170/tasks/abc170_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-26 16:30:07
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int x, n;
    cin >> x >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i = 0; i <= max(100-x, x); i++) {
        int a = x - i;
        int b = x + i;

        if (a >= 0) {
            bool ok = true;
            for (int j = 0; j < n; j++) {
                if (a == p[j]) ok = false;
            }

            if (ok) {
                cout << a << endl;
                return 0;
            }
        }

        if (b >= 0) {
            bool ok = true;
            for (int j = 0; j < n; j++) {
                if (b == p[j]) ok = false;
            }

            if (ok) {
                cout << b << endl;
                return 0;
            }
        }
    }

    return 0;
}
