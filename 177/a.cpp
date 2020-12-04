/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-04 12:55:56
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    double d, t, s;
    cin >> d >> t >> s;

    double u = d/s;
    if (u <= t) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
