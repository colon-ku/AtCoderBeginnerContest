// Link to the Problem
// https://atcoder.jp/contests/abc141/tasks/abc141_d

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
    int N, M;
    cin >> N >> M;
    vector<LD> A(N, 0.0);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    sort(all(A));

    vector<LD> ratio(N, 0.0);
    ratio[0] = 1.0;
    for (int i = 0; i < N; i++)
        ratio[i+1] = A[i+1] / A[i];

    for (int i = 0; i < M; i++) {
        int cursor = N-1;
        for (; ratio[cursor] < 1.0; cursor--) {}
        ratio[cursor++] *= 0.5;
        for (; cursor <= N-2; ratio[cursor++] *= 2.0) {}
    }

    LL ans = 0;
    LL price = (LL)A[0];
    LD r = 1.0;
    for (int i = 0; i < N; i++) {
        r *= ratio[i];
        ans += (LL)(price*r);
    }

    cout << ans << endl;
    return 0;
}
