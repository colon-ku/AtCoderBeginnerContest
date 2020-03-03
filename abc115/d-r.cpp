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
#define CEIL 51

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

//

vector<LL> a(CEIL, 1), p(CEIL, 1);

LL solve(int i, int x) {
    if      (x <= 1)            return 0;
    else if (x <= 1 + a[i-1])   return solve(i-1, x-1);
    else if (x <= 2 + a[i-1])   return 1 + p[i-1];
    else if (x <= 2 + 2*a[i-1]) return 1 + p[i-1] + solve(i-1, x - a[i-1] - 2);
    else if (x <= 3 + 2*a[i-1]) return 1 + 2*p[i-1];

    return -1;
}

int main()
{
    LL N, X;
    cin >> N >> X;

    for (int i = 1; i < CEIL; i++) {
        a[i] = 2*a[i-1] + 3;
        p[i] = 2*p[i-1] + 1;
    }

    cout << solve(N, X) << endl;
    return 0;
}
