// Link to the Problem
// https://atcoder.jp/contests/abc050/tasks/abc050_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-23 11:14:31
    cleared at: 
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
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    int m;
    cin >> m;
    vector<int> p(m), x(m);
    for (int i = 0; i < m; i++) {
        cin >> p[i] >> x[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += t[i];
    }

    for (int i = 0; i < m; i++) {
        cout << sum - t[p[i]-1] + x[i] << endl;
    }

    return 0;
}
