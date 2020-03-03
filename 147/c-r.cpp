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
    cin >> N;
    vector<int> A(N, 0);
    vector<vector<int>> x(N), y(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        for (int j = 0; j < A[i]; j++) {
            int X, Y;
            cin >> X >> Y;
            x[i].push_back(X);
            y[i].push_back(Y);
        }
    }

    int ans = 0;
    for (int bit = 0; bit < (1<<N); bit++) {
        int hon = 0;
        int ok = 1;
        for (int i = 0; i < N; i++) {
            if (bit & (1<<i)) {
                hon++;
                for (int j = 0; j < A[i]; j++) {
                    int t, u;
                    t = y[i][j];
                    (bit & (1 << (x[i][j] - 1))) ? (u = 1) : (u = 0);
                    if (t - u) ok = 0;
                }
            }
        }
        if (ok > 0 && hon > ans) ans = hon;
    }

    cout << ans << endl;
    return 0;
}
