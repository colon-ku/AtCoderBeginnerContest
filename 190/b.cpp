// Link to the Problem
// https://atcoder.jp/contests/abc190/tasks/abc190_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-20 14:47:18
    cleared at: 2021-03-20 14:49:59
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, s, d;
    cin >> n >> s >> d;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++) {
        if (x[i] < s && y[i] > d) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
