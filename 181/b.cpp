// Link to the Problem
// https://atcoder.jp/contests/abc181/tasks/abc181_b
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-02 22:15:36
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (long)(b[i]-a[i]+1)*(a[i]+b[i])/2;
    }

    cout << ans << endl;

    return 0;
}
