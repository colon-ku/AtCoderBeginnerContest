// Link to the Problem
// https://atcoder.jp/contests/abc189/tasks/abc189_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-14 11:49:04
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    long n, x;
    cin >> n >> x;
    long v[n], p[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i] >> p[i];
    }

    x *= 100;

    long sum = 0l;
    for (int i = 0; i < n; i++) {
        sum += v[i]*p[i];
        if (sum > x) {
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
