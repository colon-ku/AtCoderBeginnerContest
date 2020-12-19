# https://atcoder.jp/contests/abc110/tasks/abc110_c
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
    string S, T;
    cin >> S >> T;
    int len = S.length();

    vector<pair<char, char>> diff(1, make_pair(S[0], T[0]));
    for (int i = 0; i < len; i++) {
        char a = S[i];
        char b = T[i];
        int flag = 1;

        for (int j = 0; j < diff.size(); j++)
            if (a == diff[j].first && b == diff[j].second)
                flag = 0;

        if (flag)
            diff.push_back(make_pair(a, b));
    }

    string ans = "Yes";
    for (int i = 0; i < len; i++) {
        char a = S[i];
        char b = T[i];

        for (int j = 0; j < diff.size(); j++) {
            if (a == diff[j].first && b == diff[j].second) {
                ;
            } else if (a == diff[j].first || b == diff[j].second) {
                ans = "No";
            }
        }
    }

    cout << ans << endl;
    return 0;
}
