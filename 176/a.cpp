/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-04 13:46:37
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, x, t;
    cin >> n >> x >> t;

    int ans = ceil((double)n/x) * t;
    cout << ans << endl;

    return 0;
}
