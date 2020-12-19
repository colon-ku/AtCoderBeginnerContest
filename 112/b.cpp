# https://atcoder.jp/contests/abc112/tasks/abc112_b
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
    int N, T;
    cin >> N >> T;
    vector<int> cost(N, 0);
    vector<int> time(N, 0);
    for (int i = 0; i < N; i++)
        cin >> cost[i] >> time[i];

    int ans = 1001;
    int temp;
    for (int i = 0; i < N; i++) {
        if (time[i] <= T) {
            temp = cost[i];
            if (temp < ans) {
                ans = temp;
            }
        }
    }

    if (ans <= 1000) cout << ans << endl;
    else cout << "TLE" << endl;

    return 0;
}
