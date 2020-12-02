/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-02 20:03:53
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define INF 100000

int main()
{
    string s;
    cin >> s;

    int k = s.length();
    int ans = INF;

    for (int bit = 1; bit < (1<<k); bit++) {
        int cnt = k;
        int sum = 0;

        for (int i = 0; i < k; i++) {
            if ((1<<i) & bit) {
                cnt--;
                sum += s[i] - '0';
            }
        }

        if (sum % 3 == 0 && ans > cnt) {
            ans = cnt;
        }
    }

    if (ans >= INF) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
