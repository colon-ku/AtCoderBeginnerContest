// Link to the Problem
// https://atcoder.jp/contests/abc117/tasks/abc117_b

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

int main()
{
    int N, sum;
    cin >> N;
    vector<int> L(N, 0);
    for (int i = 0; i < N; i++)
        cin >> L[i];

    sort(all(L));

    sum = 0;
    for (int i = 0; i < N-1; i++)
        sum += L[i];

    if (L[N-1] < sum) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
