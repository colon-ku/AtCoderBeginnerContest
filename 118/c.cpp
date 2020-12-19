# https://atcoder.jp/contests/abc118/tasks/abc118_c
/*
  ∧,,∧
( 'ω' )つ ＜またお前か！！　
（m9 ＼ 　　
　 ＼　 ＼
　 　 ) ) ＼
　 ／／ ＼ ＼
　 (＿） 　 (＿)
*/

#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

int main()
{
    int N, temp;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> temp;
        A[i] = temp;
    }

    int g = A[0];
    for (int i = 0; i < N; i++) {
        temp = g;
        g = __gcd(temp, A[i]);
    }

    sort(all(A));
    int alt = A[N-1] % g;
    cout << g + alt << endl;

    return 0;
}
