// Link to the Problem
// https://atcoder.jp/contests/abc113/tasks/abc113_b

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

bool compare_by_a(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second < a.second;
    }
}

bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main()
{
    int N, T, A;
    cin >> N >> T >> A;
    vector<int> H(N, 0);
    for (int i = 0; i < N; i++)
        cin >> H[i];

    vector<pair<int, int>> ans(N, {0, 0});
    for (int i = 0; i < N; i++) {
        ans[i].first = (abs)(1000*A - 1000*T + 6*H[i]);
        ans[i].second = i;
    }

    sort(all(ans), compare_by_a);
    cout << 1 + ans[0].second << endl;

    return 0;
}
