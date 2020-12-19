# https://atcoder.jp/contests/abc115/tasks/abc115_b
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
    int N;
    cin >> N;
    vector<int> p(N, 0);
    for (int i = 0; i < N; i++)
        cin >> p[i];

    int ans = 0;
    for (int i = 0; i < N; i++)
        ans += p[i];

    sort(all(p));
    ans -= p[N-1]/2;

    cout << ans << endl;
    return 0;
}
