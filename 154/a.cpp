# https://atcoder.jp/contests/abc154/tasks/abc154_a
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-02-21 10:55:21
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
    string s, t, u;
    int a, b;
    cin >> s >> t >> a >> b >> u;

    if (s == u) {
        a--;
    } else {
        b--;
    }

    cout << a << " " << b << endl;
    return 0;
}
