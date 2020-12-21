// Link to the Problem
// https://atcoder.jp/contests/abc139/tasks/abc139_c

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
    vector<int> H(N, 0);
    for (int i = 0; i < N; i++)
        cin >> H[i];

    reverse(all(H));

    int m, ans;
    m = ans = 0;
    for (int i = 0; i < N-1; i++) {
        if (H[i] <= H[i+1]) ans++;
        else {
            if (ans > m) m = ans;
            ans = 0;
        }
    }

    cout << max(m, ans) << endl;
    return 0;
}
