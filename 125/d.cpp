// Link to the Problem
// https://atcoder.jp/contests/abc125/tasks/abc125_d
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

long acm(vector<long> A) {
    long ret = 0;
    for (int i = 0; i < A.size(); i++)
        ret += A[i];

    return ret;
}

int main()
{
    int N;
    long ans;
    cin >> N;
    vector<long> A(N, 0);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    sort(all(A));
    int neg, zer, pos = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == 0) zer++;

        if (A[i] > 0) {
            pos = N - i;
            break;
        }
    }
    neg = N - zer - pos;

    if (zer) {
        for (int i = 0; i < neg; i++)
            A[i] *= (-1);

        ans = acm(A);
    } else  if (neg && pos) {
        int times = neg / 2;
        for (int i = 0; i < 2*times; i++)
            A[i] *= (-1);

        if (-A[2*times] > A[2*times + 1]) {
            A[2*times] *= (-1);
            A[2*times + 1] *= (-1);
        }

        ans = acm(A);
    } else if (neg) {
        int times = neg / 2;
        for (int i = 0; i < 2*times; i++)
            A[i] *= (-1);

        ans = acm(A);
    } else {
        ans = acm(A);
    }

    cout << ans << endl;
    return 0;
}
