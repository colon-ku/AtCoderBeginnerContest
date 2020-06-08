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
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    int temp, g, ans = 0;
    g = A[1];
    for (int i = 2; i < N; i++) {
        ans = __gcd(g, A[i]);
    }
    for (int i = 1; i < N; i++) {
        g = A[0];
        for (int j = 0; j < N; j++) {
            if (i - j) {
                temp = __gcd(g, A[j]);
            }
        }
        if (ans < temp) ans = temp;
    }

    cout << ans << endl;
    return 0;
}
