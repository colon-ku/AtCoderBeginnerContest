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
    vector<int> w(N+1, 0);
    for (int i = 1; i <= N; i++)
        cin >> w[i];

    vector<int> l(N+1, w[1]), r(N+1, w[N]);
    for (int i = 2; i <= N; i++)
        l[i] = l[i-1] + w[i];
    for (int i = N-1; i >= 1; i--)
        r[i] = r[i+1] + w[i];

    int ans = abs(l[1] - r[2]);
    for (int i = 1; i < N; i++) {
        int temp = abs(l[i] - r[i+1]);
        if (temp < ans) ans = temp;
    }

    // for (int i = 1; i <= N; i++)
    //     cout << w[i] << " ";
    // cout << endl;
    // for (int i = 1; i <= N; i++)
    //     cout << l[i] << " ";
    // cout << endl;
    // for (int i = 1; i <= N; i++)
    //     cout << r[i] << " ";
    // cout << endl;

    cout << ans << endl;
    return 0;
}
