// Link to the Problem
// https://atcoder.jp/contests/abc184/tasks/abc184_d

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-11 15:15:32
    cleared at: 2020-12-11 16:01:50
*/

#include <bits/stdc++.h>
using namespace std;

map<vector<int>, long double> memo;

long double cnt (int a, int b, int c)
{
    long double x, y, z;
    x = y = z = 0.0l;

    if (a < 100 && b < 100 && c < 100) {
        vector<int> p, q, r;
        p = {a+1, b, c};
        q = {a, b+1, c};
        r = {a, b, c+1};

        if (memo[p] <= 0.0l) memo[p] = cnt(a+1, b, c);
        if (memo[q] <= 0.0l) memo[q] = cnt(a, b+1, c);
        if (memo[r] <= 0.0l) memo[r] = cnt(a, b, c+1);

        x = (1.0l + memo[p]) * a / (a + b + c);
        y = (1.0l + memo[q]) * b / (a + b + c);
        z = (1.0l + memo[r]) * c / (a + b + c);
    }

    return (x + y + z);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << setprecision(15) << cnt(a, b, c) << endl;

    return 0;
}
