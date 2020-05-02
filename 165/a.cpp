/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-02 20:52:06
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int k, a, b;
    cin >> k >> a >> b;

    int ok = 0;
    for (int i = k; i <= b; i += k) {
        if (i >= a) {
            ok = 1;
        }
    }

    if (ok) cout << "OK" << endl;
    else cout << "NG" << endl;

    return 0;
}
