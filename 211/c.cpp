// Link to the Problem
// https://atcoder.jp/contests/abc211/tasks/abc211_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-08-11 20:12:32
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
    string s;
    cin >> s;
    int n = s.length();

    string t = "chokudai";
    int m = t.length();

    vector<int> nil(m+1, 0);
    vector<vector<int>> ans(n+1);
    for (int i = 0; i < n+1; i++) {
        ans[i] = nil;
    }

    for (int i = 0; i < n+1; i++) {
        for (int j = 0; j < m+1; j++) {
            if (j == 0) ans[i][j] = 1;
            else if (i == 0) ans[i][j] = 0;
            else if (s[i-1] != t[j-1]) ans[i][j] = ans[i-1][j];
            else ans[i][j] = ans[i-1][j] + ans[i-1][j-1];

            ans[i][j] %= MOD;
        }
    }

    // for (int i = 0; i < n+1; i++) {
    //     for (int j = 0; j < m+1; j++) {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << ans[n][m] << endl;

    return 0;
}
