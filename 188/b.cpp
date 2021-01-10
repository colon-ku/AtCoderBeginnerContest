// Link to the Problem
// https://atcoder.jp/contests/abc188/tasks/abc188_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-01-11 00:47:03
    cleared at: 2021-01-11 00:51:54
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
    vector<long> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    long prod = 0l;
    for (int i = 0; i < n; i++) {
        prod += a[i]*b[i];
    }

    if (prod == 0l) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
