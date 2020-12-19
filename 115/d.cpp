// Link to the Problem
// https://atcoder.jp/contests/abc115/tasks/abc115_d
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
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second < a.second;
    }
}

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

string make(string b) {
    return ("B" + b + "P" + b + "B");
}

int main()
{
    int N, X;
    cin >> N >> X;

    string b = "P";
    for (int i = 0; i < N; i++)
        b = make(b);

    LL sum = 0;
    for (int i = 0; i < X; i++)
        sum += (b[i] == 'P') ? 1 : 0;

    cout << sum << endl;

    return 0;
}
