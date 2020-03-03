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

bool compare_by_a(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second < a.second;
    }
}

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

LL N;

int dfs(LL M)
{
    int ret = 0;

    //if M > N then return 0 and quit
    if (M > N) return 0;

    int cnt[3] = {0, 0, 0};
    int nums[3] = {3, 5, 7};
    int digits = 1 + (int)log10(M);
    ostringstream oss;
    oss << M;
    string s = oss.str();

    for (int i = 0; i < digits; i++) {
        for (int j = 0; j < 3; j++) {
            if (s[i]-'0' == nums[j]) {
                cnt[j]++;
            }
        }
    }

    int temp = 1;
    for (int j = 0; j < 3; j++)
        temp *= cnt[j];

    if (temp > 0) ret += 1;

    for (int j = 0; j < 3; j++)
        ret += dfs(10*M + (LL)nums[j]);

    return ret;
}

int main()
{
    cin >> N;

    cout << dfs(0) << endl;
    return 0;
}
