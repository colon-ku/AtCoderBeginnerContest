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
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

int main()
{
    int N;
    cin >> N;
    vector<pair<LD, string>> lot(N);

    for (int i = 0; i < N; i++) {
        cin >> lot[i].first >> lot[i].second;
    }

    LD ans = 0.0;
    for (int i = 0; i < N; i++) {
        if (lot[i].second == "JPY") {
            ans += lot[i].first;
        } else {
            ans += lot[i].first*380000.0;
        }
    }

    cout << ans << endl;
    return 0;
}
