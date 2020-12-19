# https://atcoder.jp/contests/abc141/tasks/abc141_b
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
    string S;
    cin >> S;

    string ans = "Yes";
    for (int i = 0; i < S.length(); i++) {
        char c = S[i];

        if (i % 2) {
            if (c == 'R') {
                ans = "No";
                break;
            }
        } else if (c == 'L') {
            ans = "No";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
