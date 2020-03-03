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

ostringstream oss_global;
string s_global = oss_global.str();

int main()
{
    int N;
    cin >> N;
    vector<vector<pair<int, int>>> vert(N, {{0, 0}});
    rep (i, N-1) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        vert[u].push_back({v, w});
        vert[v].push_back({u, w});
    }

    vector<int> ans(N, 0);
    ans[0] = 1;
    rep (i, N) {
        int size = vert[i].size();

        for (int j = 0; j < size; j++) {
            int wu, wv;
            wu =
        }
    }

    for (int i = 0; i < N; i++)
        cout << ans[i] << endl;

    return 0;
}
