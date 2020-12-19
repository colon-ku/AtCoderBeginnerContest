// Link to the Problem
// https://atcoder.jp/contests/abc127/tasks/abc127_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-16 21:43:02
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
    int r, D, x;
    cin >> r >> D >> x;

    int prev = x;
    for (int i = 0; i < 10; i++) {
        int ans = r*prev - D;
        cout << ans << endl;

        prev = ans;
    }

    return 0;
}
