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

vector<int> era(int N) {
    vector<int> table(N, 1);
    vector<int> ret(1, 2);
    table[0] = 0;
    for (int i = 2; i <= N; i++)
        for (int j = i+1; j <= N; j++)
            if (j % i == 0) table[j-1] = 0;

    for (int i = 2; i < N; i++)
        if (table[i]) ret.push_back(i+1);

    return ret;
}

int main()
{
    int N;
    cin >> N;
    vector<int> v = era(N);
    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        cout << "\t" << v[i];
        if (++cnt >= 10) {
            cout << endl;
            cnt = 0;
        }
    }
    cout << endl;

    return 0;
}
