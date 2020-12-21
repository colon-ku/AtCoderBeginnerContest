// Link to the Problem
// https://atcoder.jp/contests/abc134/tasks/abc134_c

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
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    vector<int> cp = A;
    sort(all(cp));
    int a = cp[N-1];
    int b = cp[N-2];

    for (int i = 0; i < N; i++) {
        if (A[i] == a) cout << b << endl;
        else cout << a << endl;
    }

    return 0;
}
