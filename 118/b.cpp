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
    int pr[N][M] = {};

    int K, temp;
    for (int i = 0; i < N; i++) {
        cin >> K;
        for (int j = 0; j < K; j++) {
            cin >> temp;
            pr[i][temp-1] = 1;
        }
    }

    int ans, cnt = 0;
    for (int j = 0; j < M; j++) {
        cnt = 0;
        for (int i = 0; i < N; i++) {
            if (pr[i][j]) cnt++;
        }
        if (cnt >= N) ans++;
    }

    cout << ans << endl;
    return 0;
}
