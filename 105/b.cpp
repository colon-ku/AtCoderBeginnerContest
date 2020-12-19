// Link to the Problem
// https://atcoder.jp/contests/abc105/tasks/abc105_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-07 11:06:23
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
    int n;
    cin >> n;

    string ans = "No";
    for (int i = 0; i*4 <= n; i++) {
        int m = n - i*4;
        if (m % 7 == 0) ans = "Yes";
    }

    cout << ans << endl;
    return 0;
}
