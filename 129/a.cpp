// Link to the Problem
// https://atcoder.jp/contests/abc129/tasks/abc129_a

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
    vector<int> time(3, 0);
    cin >> time[0] >> time[1] >> time[2];

    int ans = time[0] + time[1] + time[2];
    for (int i = 0; i < 3; i++) {
        int temp = time[i%3] + time[(i+1)%3];
        if (temp < ans) ans = temp;
    }

    cout << ans << endl;
    return 0;
}
