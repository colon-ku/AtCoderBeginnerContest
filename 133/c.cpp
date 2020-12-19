// Link to the Problem
// https://atcoder.jp/contests/abc133/tasks/abc133_c
/*
  ∧,,∧
( 'ω' )つ ＜WA,またお前か！！　
（m9 ＼ 　　
　 ＼　 ＼
　 　 ) ) ＼
　 ／／ ＼ ＼
　 (＿） 　 (＿)
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
    LL L, R;
    cin >> L >> R;

    LL ans = 5000;
    if (R - L == 1) {
        ans = (R*L)%2019;
    } else if (R - L >= 700) {
        ans = 0;
    } else {
        for (LL i = L; i <= R-1; i++) {
            for (LL j = i+1; j <= R; j++) {
                LL mod = (i*j)%2019;
                if (mod < ans) ans = mod;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
