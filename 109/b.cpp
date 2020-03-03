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
    int N;
    cin >> N;
    vector<string> W(N, "");
    for (int i = 0; i < N; i++)
        cin >> W[i];

    string ans = "Yes";
    vector<string> used(1, W[0]);
    for (int i = 1; i < N; i++) {
        int flag = 1;
        int len = W[i-1].length();

        for (int j = 0; j < used.size(); j++) {
            if (W[i] == used[j]) {
                ans = "No";
                flag = 0;
            }
        }
        if (W[i][0] - W[i-1][len-1]) {
            ans = "No";
            flag = 0;
        }

        if (flag) {
            used.push_back(W[i]);
        } else {
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
