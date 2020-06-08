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
oss_global << 0;
string s_global = oss_global.str();

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> P(M, 0), Y(M, 0), f(M, 0);
    vector<vector<pair<int, int>>> pv(N+1, 0);

    for (int j = 0; j < M; j++) {
        cin >> P[j] >> Y[j];
        pv[P[j]].push_back(make_pair(Y[j], j));
    }

    for (int i = 1; i <= N; i++) {
        sort(all(pv[i]));
        for (int k = 0; k < pv[i].size(); k++) {
            f[pv[i][k].second] = k + 1;
        }
    }

    for (int j = 0; j < M; j++) {
        int d;

        d = 5 - (int)log10(P[j]);
        for (int k = 0; k < d; k++)
            cout << 0;
        cout << P[j];

        d = 5 - (int)log10(f[j]);
        for (int k = 0; k < d; k++)
            cout << 0;
        cout << f[j] << endl;
    }

    return 0;
}
