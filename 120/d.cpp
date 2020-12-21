// Link to the Problem
// https://atcoder.jp/contests/abc120/tasks/abc120_d

/*
  ∧,,∧
( 'ω' )つ ＜またお前か！！　
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

int main()
{
    int N, M;
    cin >> N >> M;
    vector<LL> ans(M);

    vector<pair<int, int>> br(N);
    for (int i = 0; i < M; i++)
        cin >> br[i].first >> br[i].second;

    //処理
    for (int i = M-1; i >= 0; i--) {
        
    }

    for (int i = 0; i < M; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
