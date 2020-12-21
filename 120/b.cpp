// Link to the Problem
// https://atcoder.jp/contests/abc120/tasks/abc120_b

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

int main()
{
    int a, b, k, count;
    cin >> a >> b >> k;

    count = 0;
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            // cout << i << endl;
            if (++count == k) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
