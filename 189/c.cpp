// Link to the Problem
// https://atcoder.jp/contests/abc189/tasks/abc189_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-20 14:03:38
    cleared at: 2021-03-20 14:42:22
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for (int left = 0; left < n; left++) {
        int x = a[left];
        for (int right = left; right < n; right++) {
            x = min(x, a[right]);
            ans = max(ans, x*(right - left + 1));
        }
    }

    cout << ans << endl;

    return 0;
}
