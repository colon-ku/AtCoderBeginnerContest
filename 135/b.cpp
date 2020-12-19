// Link to the Problem
// https://atcoder.jp/contests/abc135/tasks/abc135_b
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
    vector<int> p(N, 0);
    for (int i = 0; i < N; i++)
        cin >> p[i];

    int flag = 0;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (p[i] != i+1) {
            if (p[p[i]-1] != i+1) {
                flag = 1;
                break;
            } else {
                cnt++;
            }
        }
    }

    if (flag || cnt >= 3) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}
