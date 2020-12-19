// Link to the Problem
// https://atcoder.jp/contests/abc114/tasks/abc114_b
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

typedef long long LL;
typedef long double LD;

bool compare_by_a(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second < a.second;
    }
}

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main()
{
    string S;
    cin >> S;
    int N = S.length();
    vector<int> seq(N, 0);
    for (int i = 0; i < N; i++)
        seq[i] = S[i] - '0';

    vector<pair<int, int>> g(N-2, {0, 0});
    for (int i = 0; i < N-2; i++) {
        g[i].first = abs(seq[i]*100 + seq[i+1]*10 + seq[i+2] - 753);
        g[i].second = i;
    }

    sort(all(g), compare_by_a);
    int idx = g[0].second;
    int ans = abs(seq[idx]*100 + seq[idx+1]*10 + seq[idx+2] - 753);
    cout << ans << endl;

    return 0;
}
