// Link to the Problem
// https://atcoder.jp/contests/abc165/tasks/abc165_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-02 21:11:44
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    long x;
    cin >> x;

    long y = 100;
    int n = 1;
    while (1) {
        y *= 1.01;

        if (y >= x) {
            break;
        } else {
            n++;
        }
    }

    cout << n << endl;

    return 0;
}
