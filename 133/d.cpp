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
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    vector<int> ans(N, 0);
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += A[i];
    int temp = 0;
    for (int i = 2; i <= N-2; i += 2)
        temp += A[i];
    ans[0] = sum - 2*temp;
    int flag = 1;

    for (int i = 1; i <= N-1; i++)
        ans[i] = 2*A[i-1] - ans[i-1];

    for (int i = 0; i < N; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}
