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
    for (int i = 0; i < N; i++) {
        cin >> s[i];
        sort(all(s[i]));
    }

    sort(all(s));
    
    LL ans = 0;
    for (int i = 0; i <= N-2; ) {
        int j = i+1;
        for (; j <= N-1; j++)
            if (s[i] != s[j]) break;

        ans += (j-i)*(j-i-1)/2;
        i = j;
    }

    cout << ans << endl;
    return 0;
}
