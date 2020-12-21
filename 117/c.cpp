// Link to the Problem
// https://atcoder.jp/contests/abc117/tasks/abc117_c

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
    //入力
    int N, M;
    cin >> N >> M;
    vector<int> coor(M, 0); //各座標を格納
    for (int i = 0; i < M; i++)
        cin >> coor[i];

    //処理
    int temp, cnt, ans;
    vector<pair<int, int>> ivl(M - 1, {0, 0});  //各座標の間隔とインデックスを格納
    vector<int> copy(M-1, 0);                   //ivl.firstのコピー
    vector<int> split(M - 1, 0);                //コマが移動しない所を決定
    vector<int> len(N, 0);                      //各コマの動く距離を格納

    sort(all(coor));    //座標をソートして揃える

    for (int j = 0; j < M-1; j++) {
        ivl[j].first = coor[j+1] - coor[j];
        ivl[j].second = j;
    }

    for (int j = 0; j < M-1; j++)
        copy[j] = ivl[j].first;

    sort(all(ivl), compare_by_a);   //ivlを間隔の大きさでソート

    if (N >= M) {   //NがM以上のときは0を返して終了
        cout << 0 << endl;
        return 0;
    } else {
        for (int i = 1; i <= N-1; i++) { //N-1回の分割を行う
            split[ivl[M-1-i].second] = 1;
        }

        temp, cnt = 0;
        for (int j = 0; j < M-1; j++) {
            if (split[j]) {
                len[cnt++] = temp;
                temp = 0;
            } else {
                temp += copy[j];
            }
        }
        len[N-1] = temp;

        ans = 0;
        for (int i = 0; i < N; i++)
            ans += len[i];

        cout << ans << endl;
        return 0;
    }
}
