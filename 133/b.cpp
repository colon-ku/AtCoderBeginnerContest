// Link to the Problem
// https://atcoder.jp/contests/abc133/tasks/abc133_b
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
    int N, D;
    cin >> N >> D;
    vector<vector<int>> X;
    for (int i = 0; i < N; i++) {
        vector<int> coor(D, 0);
        for (int j = 0; j < D; j++) {
            cin >> coor[j];
        }
        X.push_back(coor);
    }

    int ans = 0;
    for (int i = 0; i <= N-2; i++) {
        for (int j = i+1; j <= N-1; j++) {
            int temp = 0;
            for (int d = 0; d < D; d++)
                temp += pow(X[i][d] - X[j][d], 2);

            float f = sqrt(temp);
            if (temp == pow(f, 2)) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
