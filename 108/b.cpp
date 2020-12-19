# https://atcoder.jp/contests/abc108/tasks/abc108_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-03 18:17:47
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
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;

    x3 = x2 + (y1 - y2);
    y3 = y2 - (x1 - x2);
    x4 = x1 + (y1 - y2);
    y4 = y1 - (x1 - x2);

    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}
