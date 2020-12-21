// Link to the Problem
// https://atcoder.jp/contests/abc115/tasks/abc115_c

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
    int N, K;
    cin >> N >> K;
    vector<int> h(N, 0);
    for (int i = 0; i < N; i++)
        cin >> h[i];

    sort(all(h));

    vector<int> gap(N-K+1, 0);
    for (int i = 0; i < N-K+1; i++)
        gap[i] = h[i+K-1] - h[i];

    sort(all(gap));

    //test down
    // for (int i = 0; i < N-K+1; i++)
    //     cout << gap[i] << " ";
    // cout << endl;
    //test up
    int ans = gap[0];

    cout << ans << endl;
    return 0;
}
