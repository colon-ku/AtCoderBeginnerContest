// Link to the Problem
// https://atcoder.jp/contests/abc141/tasks/abc141_c
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
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(Q, 0);
    for (int i = 0; i < Q; i++)
        cin >> A[i];

    vector<int> p(N, 0);
    for (int i = 0; i < Q; i++) {
        int par = A[i] - 1;
        p[par]++;
    }

    for (int par = 0; par < N; par++) {
        if (K - Q + p[par] > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
