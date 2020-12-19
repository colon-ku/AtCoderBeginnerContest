# https://atcoder.jp/contests/abc136/tasks/abc136_b
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
    int N;
    cin >> N;
    int M = N;

    int x = 0; //Nの桁数
    while (1) {
        M /= 10;
        x++;
        if (M < 1) break;
    }

    LL ans = 0;
    for (int i = 1; i <= x-1; i += 2) {
        ans += 9*pow(10, i-1);
    }

    if (x % 2) ans += (N - pow(10, x-1) + 1);

    cout << ans << endl;
    return 0;
}
