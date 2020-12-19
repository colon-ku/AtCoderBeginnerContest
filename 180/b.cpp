# https://atcoder.jp/contests/abc180/tasks/abc180_b
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-02 22:38:40
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    cout << fixed << setprecision(15);
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];

    long mdist = 0;
    for (int i = 0; i < n; i++) {
        mdist += abs(x[i]);
    }
    cout << mdist << endl;

    long edist = 0;
    for (int i = 0; i < n; i++) {
        edist += abs(x[i])*(long)abs(x[i]);
    }
    cout << sqrt(edist) << endl;

    long cdist = 0;
    for (int i = 0; i < n; i++) {
        if (cdist < abs(x[i])) cdist = abs(x[i]);
    }
    cout << cdist << endl;

    return 0;
}
