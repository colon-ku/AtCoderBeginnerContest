// Link to the Problem
// https://atcoder.jp/contests/abc050/tasks/abc050_a

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int a, b;
    char op;
    cin >> a >> op >> b;

    int ans;
    if (op == '+') {
        ans = a + b;
    } else {
        ans = a - b;
    }

    cout << ans << endl;

    return 0;
}
