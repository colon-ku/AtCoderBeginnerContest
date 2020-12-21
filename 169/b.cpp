// Link to the Problem
// https://atcoder.jp/contests/abc169/tasks/abc169_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-09-23 05:35:55
*/

#include <iostream>
#include <vector>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007

int main()
{
    int n;
    cin >> n;
    vector<long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int zero = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) zero++;
    }

    if (zero > 0) {
        cout << 0 << endl;
        return 0;
    }

    long ans = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] <= 1000000000000000000/ans) {
            ans *= a[i];
        } else {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;

    return 0;
}
