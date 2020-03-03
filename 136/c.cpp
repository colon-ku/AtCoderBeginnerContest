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
    vector<int> H(N, 0);
    for (int i = 0; i < N; i++)
        cin >> H[i];

    string ans;
    vector<int> done(N, 0);
    while (1) {
        int flag = 0;
        int ok = 1;
        for (int i = 0; i <= N-2; i++) {
            if (H[i] <= H[i+1]) {
                ;
            } else if (H[i] == H[i+1] + 1) {
                if (done[i] - 1) {
                    H[i]--;
                    ok *= 0;
                } else {
                    flag = 1;
                }
            } else {
                flag = 1;
            }
        }

        if (flag) {
            ans = "No";
            break;
        } else if (ok) {
            ans = "Yes";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
