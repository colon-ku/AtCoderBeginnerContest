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
    vector<vector<vector<int>>> edge(N+1, {{0, 0}});
    for (int i = 0; i < N-1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edge[u].push_back({v, w});
    }

    vector<int> ans(N+1, 0);
    ans[1] = 1;
    for (int i = 1; i <= N; i++) {
        int size = edge[i].size();
        if (size >= 2) {
            for (int j = 1; j < size; j++) {
                if (ans[i]) {
                    if (edge[i][j][1] % 2) ans[edge[i][j][0]] = (-1)*ans[i];
                    else ans[edge[i][j][0]] = ans[i];
                } else if (ans[edge[i][j][0]]) {
                    if (edge[i][j][1] % 2) ans[i] = (-1)*ans[edge[i][j][0]];
                    else ans[i] = ans[edge[i][j][0]];
                }
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        if (ans[i] > 0) cout << 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}
