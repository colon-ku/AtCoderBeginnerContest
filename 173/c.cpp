# https://atcoder.jp/contests/abc173/tasks/abc173_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-07 12:20:17
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int h, w, k;
    cin >> h >> w >> k;
    vector<vector<char>> c(h);
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < w; j++) {
            c[i].push_back(s[j]);
        }
    }

    int ans = 0;
    for (int hbit = 0; hbit < (1<<h); hbit++) {
        for (int wbit = 0; wbit < (1<<w); wbit++) {
            auto p = c;

            for (int i = 0; i < h; i++) {
                for (int j = 0; j < w; j++) {
                    if ((1<<i) & hbit || (1<<j) & wbit) {
                        p[i][j] = '*';
                    }
                }
            }

            int cnt = 0;
            for (int i = 0; i < h; i++) {
                for (int j = 0; j < w; j++) {
                    if (p[i][j] == '#') {
                        cnt++;
                    }
                }
            }

            if (cnt == k) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
