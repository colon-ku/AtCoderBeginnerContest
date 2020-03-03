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
    vector<pair<int, int>> coor(N, {0, 0});
    vector<LL> h(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> coor[i].first >> coor[i].second >> h[i];
    }

    LL height;
    LL temp;
    int ok;
    for (int x = 0; x <= 100; x++) {
        for (int y = 0; y <= 100; y++) {
            height = -1;
            ok = 1;

            for (int i = 0; i < N; i++) {
                if (height < 0) {
                    if (h[i] >= 1) {
                        height = h[i] + abs(x - coor[i].first) + abs(y - coor[i].second);
                        break;
                    }
                }
            }

            for (int i = 0; i < N; i++) {
                if (max(height - abs(x - coor[i].first) - abs(y - coor[i].second), 0ll) != h[i]) {
                    ok = 0;
                }
            }

            if (ok) {
                printf("%d %d %lld\n", x, y, height);
                return 0;
            }
        }
    }
}
