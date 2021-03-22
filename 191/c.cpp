// Link to the Problem
// https://atcoder.jp/contests/abc191/tasks/abc191_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-22 17:34:21
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
    int h, w;
    cin >> h >> w;
    int s[h][w];
    for (int i = 0; i < h; i++) {
        string line;
        cin >> line;

        for (int j = 0; j < w; j++) {
            if (line[j] == '#') {
                s[i][j] = 1;
            } else {
                s[i][j] = 0;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i < h-1; i++) {
        for (int j = 1; j < w-1; j++) {
            if (s[i][j] == 1 && s[i-1][j-1]+s[i-1][j]+s[i][j-1] == 0) ans++;
            if (s[i][j] == 1 && s[i][j-1]+s[i+1][j-1]+s[i+1][j] == 0) ans++;           
            if (s[i][j] == 1 && s[i-1][j]+s[i-1][j+1]+s[i][j+1] == 0) ans++;
            if (s[i][j] == 1 && s[i][j+1]+s[i+1][j]+s[i+1][j+1] == 0) ans++;
            if (s[i][j] == 0 && s[i-1][j-1]+s[i-1][j]+s[i][j-1] == 3) ans++;
            if (s[i][j] == 0 && s[i][j-1]+s[i+1][j-1]+s[i+1][j] == 3) ans++;
            if (s[i][j] == 0 && s[i-1][j]+s[i-1][j+1]+s[i][j+1] == 3) ans++;
            if (s[i][j] == 0 && s[i][j+1]+s[i+1][j]+s[i+1][j+1] == 3) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
