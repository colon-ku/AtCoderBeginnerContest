// Link to the Problem
// https://atcoder.jp/contests/abc128/tasks/abc128_c

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-16 20:31:52
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007

typedef long long LL;
typedef long double LD;

bool bitpare_by_b(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

ostringstream oss_global;
string s_global = oss_global.str();

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> k(M), p(M);
    vector<vector<int>> s(M);
    for (int i = 0; i < M; i++) {
        cin >> k[i];
        for (int j = 0; j < k[i]; j++) {
            int temp;
            cin >> temp;
            temp -= 1; // 0 to N-1
            s[i].push_back(temp);
        }
    }
    for (int i = 0; i < M; i++) {
        cin >> p[i];
    }

    // end input
    int ans = 0;

    for (int bit = 0; bit < (1<<N); bit++) {
        // each combination from every sequences of i/o of the switches
        int ok = 1;
        for (int bulb = 0; bulb < M; bulb++) {
            // check if the interested combination satisfies the condition
            int cnt = 0;
            for (int i = 0; i < k[bulb]; i++) {
                if (bit & (1<<s[bulb][i])) {
                    cnt++;
                }
            }

            if (cnt % 2 != p[bulb]) {
                ok = 0;
            }
        }

        if (ok) ans++;
    }

    cout << ans << endl;
    return 0;
}
