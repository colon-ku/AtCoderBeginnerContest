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
    int N, M;
    cin >> N >> M;
    vector<int> a(M+2, -1);
    for (int i = 1; i <= M; i++)
        cin >> a[i];
    a[M+1] = N+1;

    vector<LL> com(N+1, 0);
    com[1] = 1; com[2] = 2;
    for (int i = 3; i <= N; i++)
        com[i] = com[i-1] + com[i-2];

    LL ans = 1;
    for (int j = 1; j <= M+1; j++) {
        int gap = a[j] - a[j-1];
        switch (gap) {
            case 1:
                ans = 0;
                break;
            case 2:
                break;
            default:
                ans = (ans * com[gap-2]) % MOD;
                break;
        }
    }

    cout << ans << endl;
    return 0;
}
