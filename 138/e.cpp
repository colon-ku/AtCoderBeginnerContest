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
    string s, t;
    cin >> s >> t;

    int n = t.length();
    int m = s.length();
    vector<vector<int>> wh(26);
    for (int i = 0; i < m; i++) {
        int c = s[i] - 'a';
        wh[c].push_back(i);
    }

    vector<int> eye(n, 0);
    int prev = -1;
    for (int i = 0; i < n; i++) {
        int c = t[i] - 'a';
        if (wh[c].size() <= 0) {
            eye[i] = -1;
            break;
        } else {
            sort(all(wh[c]));
            eye[i] = wh[c][0];
            while(!wh[c].empty()) {
                if (prev < wh[c][0]) {
                    eye[i] = wh[c][0];
                    break;
                }
                wh[c].erase(wh[c].begin());
            }
        }
        prev = eye[i];
    }

    for (int i = 0; i < n; i++)
        cout << eye[i] << " ";
    cout << endl;

    LL ans = 0;
    prev = -1;
    for (int i = 0; i < n; i++) {
        int cur = eye[i];
        if (cur < 0) {
            ans = -1;
            break;
        }
        if (cur <= prev)
            ans += m;
        prev = cur;
    }

    if (ans >= 0) ans += eye[n-1] + 1;

    cout << ans << endl;
    return 0;
}
