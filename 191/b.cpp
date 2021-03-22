// Link to the Problem
// https://atcoder.jp/contests/abc191/tasks/abc191_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-22 17:32:11
    cleared at: 2021-03-22 17:34:06
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != x) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
