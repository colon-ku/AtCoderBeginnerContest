// Link to the Problem
// https://atcoder.jp/contests/abc127/tasks/abc127_a

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-16 21:37:08
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

    int ans;
    if (a <= 5) ans = 0;
    else if (a <= 12) ans = b/2;
    else ans = b;

    cout << ans << endl;
    return 0;
}
