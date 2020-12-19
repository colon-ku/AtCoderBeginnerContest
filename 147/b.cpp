// Link to the Problem
// https://atcoder.jp/contests/abc147/tasks/abc147_b
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
    string s;
    cin >> s;

    if (s.length() == 1) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    for (int i = 0; i <= s.length()/2 - 1; i++) {
        char a, b;
        a = s[i]; b = s[s.length() - i - 1];

        if (a - b) ans++;
    }

    cout << ans << endl;
    return 0;
}
