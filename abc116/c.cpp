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
    vector<int> h(N+1, 0);  //前に余分
    vector<int> up(N+1, 0); //後ろに余分
    for (int i = 1; i <= N; i++)
        cin >> h[i];

    for (int i = 0; i < N; i++)
        if (h[i+1] > h[i]) up[i] = 1;
    up[N] = 1;

    int ans, temp = 0;
    for (int i = 0; i < N; i++) {
        if (up[i]) {
            if (temp < h[i+1]) temp = h[i+1];
        } else {
            if (up[i+1]) {
                ans += temp - h[i+1];
                temp = 0;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
