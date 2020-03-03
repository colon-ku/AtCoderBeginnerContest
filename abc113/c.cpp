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
    int N, M;
    cin >> N >> M;
    vector<int> P(M, 0), Y(M, 0);
    for (int j = 0; j < M; j++)
        cin >> P[j] >> Y[j];

    vector<vector<pair<int, int>>> years(N, {{0, 0}});
    for (int j = 0; j < M; j++)
        years[P[j]-1].push_back(make_pair(Y[j], j));

    vector<int> index(M, 0);
    for (int i = 0; i < N; i++) {
        sort(all(years[i]), compare_by_a);
        years[i].erase(years[i].begin());

        for (int j = 0; j < years[i].size(); j++)
            index[years[i][j].second] = j+1;
    }

    for (int j = 0; j < M; j++) {
        for (int m = 0; m < 5 - (int)log10(P[j]); m++)
            cout << 0;
        cout << P[j];
        for (int m = 0; m < 5 - (int)log10(index[j]); m++)
            cout << 0;
        cout << index[j] << endl;
    }

    return 0;
}
