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
    vector<int> calc(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> coor[i].first >> coor[i].second >> h[i];
        if (h[i] > 0) calc[i] = 1;
    }

    LL height = -1;
    int ok;
    LL temp;
    for (int x = 0; x <= 100; x++) {
        for (int y = 0; y <= 100; y++) {
            ok = 1;
            
            for (int i = 0; i < N; i++) {
                temp = h[i] + abs(x - coor[i].first) + abs(y - coor[i].second);
                if (calc[i]) {
                    if (height <= 0) height = temp;
                    if (height - temp) ok = 0;
                }
            }

            if (ok) {
                printf("%d %d %lld\n", x, y, height);
                return 0;
            }
        }
    }

    cout << "Hmm.." << endl;
    return 1;
}
