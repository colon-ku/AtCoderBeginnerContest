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
    int N;
    cin >> N;
    vector<pair<string, pair<int, int>>> rest(N);

    for (int i = 0; i < N; i++) {
        cin >> rest[i].first >> rest[i].second.first;
        rest[i].second.first *= -1;
        rest[i].second.second = i+1;
    }

    sort(all(rest));

    for (int i = 0; i < N; i++)
        cout << rest[i].second.second << endl;

    return 0;
}
