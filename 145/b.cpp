// Link to the Problem
// https://atcoder.jp/contests/abc145/tasks/abc145_b
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
    string S;
    cin >> N >> S;

    int ans = 1;
    if (N % 2) {
        ans = 0;
    } else {
        for (int i = 0; i < N/2; i++) {
            int j = i + N/2;

            if (S[i] - S[j]) ans = 0;
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
