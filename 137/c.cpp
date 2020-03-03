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
    vector<string> s(N, "");
    for (int i = 0; i < N; i++)
        cin >> s[i];

    vector<string> cnt(N, "");
    for (int i = 0; i < N; i++) {
        cnt[i] = "00000000000000000000000000"; //26 characters

        for (int j = 0; j < 10; j++) {
            int c = s[i][j] - 'a';
            int tar = cnt[i][c] - '0';
            if (tar <= 8) {
                cnt[i][c] = tar + 1 + '0';
            } else {
                cnt[i][c] = 'a';
            }
        }
    }

    sort(all(cnt));

    clock_t start = clock();
    LL ans = 0;
    for (int i = 0; i <= N-2; ) {
        int j = i+1;
        for (; j <= N-1; j++)
            if (cnt[i] != cnt[j]) break;

        int temp = j-i;
        ans += (temp--)*temp/2;
        i = j;
    }
    clock_t end = clock();

    const double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
    printf("time %lf[ms]\n", time);

    cout << ans << endl;
    return 0;
}
