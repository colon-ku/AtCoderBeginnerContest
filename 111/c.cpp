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
#define INF 100007

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
    int n;
    cin >> n;
    vector<int> e(n/2, 0), o(n/2, 0);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cin >> e[i/2];
        } else {
            cin >> o[i/2];
        }
    }

    vector<pair<int, int>> a(1, {0, 0}), b(1, {0, 0});
    for (int i = 0; i < n/2; i++) {
        for (int j = 0; j < n/2; j++) {
            if (e[i] == a[j].first) {
                a[j].second++;
                break;
            } else if (a[j].first == 0) {
                a[j].first = e[i];
                a[j].second = 1;
                break;
            }
        }
    }
    for (int i = 0; i < n/2; i++) {
        for (int j = 0; j < n/2; j++) {
            if (o[i] == b[j].first) {
                b[j].second++;
                break;
            } else if (b[j].first == 0) {
                b[j].first = o[i];
                b[j].second = 1;
                break;
            }
        }
    }

    sort(all(a), compare_by_b);
    reverse(all(a));
    sort(all(b), compare_by_b);
    reverse(all(b));

    int ans;
    if (a[0].first == b[0].first) {
        ans = min(n - a[0].first - b[1].first,
                  n - a[1].first - b[0].first);
    } else {
        ans = n - a[0].first - b[0].first;
    }

    cout << ans << endl;
    return 0;
}
