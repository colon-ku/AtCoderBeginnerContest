// Link to the Problem
// https://atcoder.jp/contests/abc135/tasks/abc135_c

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
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007

typedef long long LL;
typedef long double LD;

bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

ostringstream oss_global;
string s_global = oss_global.str();

int main()
{
    int N;
    cin >> N;
    vector<int> A(N+1, 0);
    vector<int> B(N, 0);
    for (int i = 0; i < N+1; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
        cin >> B[i];

    LL ans = 0;
    for (int i = 0; i < N; i++) {
        int power = B[i];
        if (power <= A[i]) {
            ans += power;
        } else {
            ans += A[i];
            power -= A[i];
            if (power <= A[i+1]) {
                ans += power;
                A[i+1] -= power;
            } else {
                ans += A[i+1];
                A[i+1] = 0;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
