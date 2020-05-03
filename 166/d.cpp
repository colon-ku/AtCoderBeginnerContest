/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-03 21:13:01
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int x;
    cin >> x;

    pair<long, long> ans;
    for (long a = -1000; a < 1000; a++) {
        for (long b = -1000; b < a; b++) {
            long c = pow(a, 5);
            long d = pow(b, 5);

            if (c-d == x) {
                ans.first = a;
                ans.second = b;
            }
        }
    }

    cout << ans.first << " " << ans.second << endl;

    return 0;
}
