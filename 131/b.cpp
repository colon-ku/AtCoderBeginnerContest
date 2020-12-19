# https://atcoder.jp/contests/abc131/tasks/abc131_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-15 23:00:12
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
    int N, L;
    cin >> N >> L;

    int x = 1 - L;
    if (x <= N && x >= 1) {
        ;
    } else if (x > N) {
        x = N;
    } else {
        x = 1;
    }

    int ans = ( (L+N)*(L+N-1) - L*(L-1) - 2*(L+x-1) ) / 2;
    cout << ans << endl;
    return 0;
}
