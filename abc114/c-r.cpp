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

int N;

int dfs(int M)
{
    int ret = 0;

    if (M > N) return 0;

    vector<int> cnt(3, 0);
    int nums[3] = {3, 5, 7};
    int digits = 1 + (int)log10(M);
    int d = 0;

    int temp = M;
    for (int j = 0; j < 3; j++) {
        if ()
    }
    for (int i = 0; i < digits; i++) {
        d = 1 + (int)log10(temp);
        
        for (int j = 0; j < 3; j++) {
            if (oss.str()[i]-'0' == nums[j]) {
                cnt[j]++;
            }
        }
    }

    temp = 1;
    for (int j = 0; j < 3; j++)
        temp *= cnt[j];

    if (temp > 0) ret = 1;

    for (int j = 0; j < 3; j++)
        ret += dfs(10*M + nums[j]);

    return ret;
}

int main()
{
    cin >> N;

    cout << dfs(0) << endl;
    return 0;
}
