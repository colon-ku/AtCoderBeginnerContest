// Link to the Problem
// https://atcoder.jp/contests/abc197/tasks/abc197_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-04-11 19:22:04
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

int main()
{
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    x--; y--;

    vector<vector<int>> a(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++) {
        string temp;
        cin >> temp;
        for (int j = 0; j < w; j++) {
            if (temp[j] == '#') a[i][j] = 1;
            else a[i][j] = 0;
        }
    }

    int ans = -3;

    for (int i = x; i < h && a[i][y] == 0; i++) ans++;
    for (int i = x; i >= 0 && a[i][y] == 0; i--) ans++;
    for (int j = y; j < w && a[x][j] == 0; j++) ans++;
    for (int j = y; j >= 0 && a[x][j] == 0; j--) ans++;

    cout << ans << endl;

    return 0;
}
