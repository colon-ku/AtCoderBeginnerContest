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
    int N, M;
    cin >> N >> M;
    vector<vector<int>> s(M);
    vector<int> p(M, 0);
    int k, temp;
    for (int i = 0; i < M; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> temp;
            s[i].push_back(temp);
        }
    }
    for (int i = 0; i < M; i++)
        cin >> p[i];

    vector<string> cond(pow(2, M));
    vector<int> bin;
    string str;
    int ans = 0;
    for (int i = 0; i < pow(2, M); i++) {
        stringstream ss;
        ss << bitset<10>(i);
        cond[i] = ss.str();

        for (int j = 0; j < M; j++) {
            temp = 0;
            for (int m = 0; m < s[i].size(); m++) {
                if (cond[i][10-s[i][m]] - '0' == 1) temp++;
            }
            if (temp % 2 == p[j]) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
