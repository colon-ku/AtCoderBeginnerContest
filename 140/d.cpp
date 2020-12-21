// Link to the Problem
// https://atcoder.jp/contests/abc140/tasks/abc140_d

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
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    vector<int> seq(N, 0);
    for (int i = 0; i < N; i++) {
        char c = S[i];
        if (c == 'L') seq[i] = -1;
        else seq[i] = 1;
    }

    for (int i = 0; i < N; i++) {
        
    }
}
