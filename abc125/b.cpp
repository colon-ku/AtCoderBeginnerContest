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
    vector<int> val(N, 0);
    vector<int> cost(N, 0);
    for (int i = 0; i < N; i++)
        cin >> val[i];
    for (int i = 0; i < N; i++)
        cin >> cost[i];

    vector<int> gap(N, 0);
    for (int i = 0; i < N; i++)
        gap[i] = val[i] - cost[i];

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (gap[i] > 0) {
            ans += gap[i];
        }
    }

    cout << ans << endl;
    return 0;
}
