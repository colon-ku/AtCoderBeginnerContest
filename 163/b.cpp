// Link to the Problem
// https://atcoder.jp/contests/abc163/tasks/abc163_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-19 21:04:10
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    int sum = 0;
    for (int i = 0; i < m; i++)
        sum += a[i];

    cout << max(-1, n-sum) << endl;

    return 0;
}
