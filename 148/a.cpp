# https://atcoder.jp/contests/abc148/tasks/abc148_a
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-03 17:18:04
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
    int a, b;
    cin >> a >> b;

    int ans = 4 + 2 + 1;
    ans -= (1<<(a-1));
    ans -= (1<<(b-1));

    for (int i = 0; i < 3; i++) {
        if (ans == (1<<i)) {
            ans = i+1;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
