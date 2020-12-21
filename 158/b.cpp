// Link to the Problem
// https://atcoder.jp/contests/abc158/tasks/abc158_b

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-07 21:01:45
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
    LL n, a, b;
    cin >> n >> a >> b;

    LL c, x, y;
    c = a + b;
    
    x = n/c;
    y = n%c;

    LL ans = 0;
    ans += x*a;
    if (y >= a) {
        ans += a;
    } else {
        ans += y;
    }

    cout << ans << endl;

    return 0;
}
