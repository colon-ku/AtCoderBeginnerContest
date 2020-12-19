# https://atcoder.jp/contests/abc114/tasks/abc114_c
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

int main()
{
    int N;
    cin >> N;

    int D = 1 + (int)log10(N);
    vector<int> num(D, 0);

    for (int i = 1; i < D; i++)
        num[i-1] = pow(3, i);

    if (N < 3*pow(10, D-1)) {
        num[D-1] = 0;
    } else if (N < 5*pow(10, D-1)) {
        num[D-1] = pow(3, D-1);
    } else if (N < 7*pow(10, D-1)) {
        num[D-1] = 2*pow(3, D-1);
    } else {
        num[D-1] = pow(3, D);
    }

    int ans = 0;
    for (int i = 0; i < D; i++)
        ans += num[i];

    cout << ans << endl;
    return 0;
}
