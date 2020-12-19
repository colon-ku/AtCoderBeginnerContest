# https://atcoder.jp/contests/abc174/tasks/abc174_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-06 21:50:43
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int k;
    cin >> k;

    int ans = -1;
    int x = 7;
    map<int, int> cnt;
    while (cnt[x%k] <= 0) {
        int i = x%k;
        cnt[i]++;

        if (i == 0) {
            int t = 0;
            for (auto cur : cnt) {
                t++;
            }
            ans = t;
            break;
        }

        x = ((10*x + 7)%k + k)%k;
    }

    cout << ans << endl;

    return 0;
}
