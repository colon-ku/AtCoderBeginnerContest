// Link to the Problem
// https://atcoder.jp/contests/abc144/tasks/abc144_c

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-13 13:38:34
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007

typedef long long LL;
typedef long double LD;

bool compare_by_b(pair<int, int> a, pair<int, int> b)
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
    LL N;
    cin >> N;

    LL ans = -1;
    for (LL k = 2*((LL)sqrt(N) - 1); ; k++) {
        for (LL i = 1; i <= (k + 1)/2 + 1; i++) {
            if (N == i*( k - i + 2 )) {
                ans = k;
                break;
            }
        }

        if (ans > 0) break;
    }

    cout << ans << endl;
    return 0;
}
