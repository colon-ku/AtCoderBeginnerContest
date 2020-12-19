# https://atcoder.jp/contests/abc125/tasks/abc125_c
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
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second < a.second;
    }
}

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main()
{
    int N, ans;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    vector<int> L(N+1, 0), R(N+1, 0), M(N, 0);
    for (int i = 0; i <= N-1; i++)
        L[i+1] = __gcd(L[i], A[i]);

    for (int i = N-1; i >= 0; i--)
        R[i] = __gcd(R[i+1], A[i]);

    for (int i = 0; i < N; i++)
        M[i] = __gcd(L[i], R[i+1]);

    sort(all(M));
    ans = M[N-1];

    cout << ans << endl;
    return 0;
}
