// Link to the Problem
// https://atcoder.jp/contests/abc110/tasks/abc110_b
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
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;
    vector<int> x(N, 0), y(M, 0);
    for (int i = 0; i < N; i++)
        cin >> x[i];
    for (int j = 0; j < M; j++)
        cin >> y[j];

    sort(all(x)); sort(all(y));

    string ans = "War";
    for (int z = X+1; z <= Y; z++) {
        if (z > x[N-1] && z <= y[0]) {
            ans = "No War";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
