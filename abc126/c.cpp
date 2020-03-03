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
    int N, K;
    cin >> N >> K;

    LD ans = 0.0l;

    if (N >= K) {
        int m = 0;
        for (int k = K-1; k >= 1; k--) {
            for (; k*pow(2, m) < K; m++) {
                ;
            }
            ans += (LD)pow(0.5l, m)/N;
        }
        ans += (LD)(N-K+1)/N;
    } else {
        int m = 0;
        for (int k = N; k >= 1; k--) {
            for (; k*pow(2, m) < K; m++) {
                ;
            }
            ans += (LD)pow(0.5l, m)/N;
        }
    }

    printf("%.12Lf\n", ans);
    return 0;
}
