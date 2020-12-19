# https://atcoder.jp/contests/abc147/tasks/abc147_c
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

string binary(int x, int y)
{
    string bin = "";

    while (x > 0) {
        char res = (x % 2) + '0';
        bin = res + bin;
        x /= 2;
    }

    y = y - bin.length();
    for (int i = 0; i < y; i++)
        bin = '0' + bin;

    return bin;
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N, 0);
    vector<vector<int>> x(N), y(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        for (int j = 0; j < A[i]; j++) {
            int X, Y;
            cin >> X >> Y;
            x[i].push_back(X);
            y[i].push_back(Y);
        }
    }

    int ans = 0;
    for (int k = 1; k < pow(2, N); k++) {
        string bin = binary(k, N);
        int hon = 0; //正直な人の数(bitの立っている数)
        for (int i = 0; i < N; i++)
            if (bin[i] - '0' > 0) hon++;

        int ok = 1;
        for (int i = 0; i < N; i++) {
            if (bin[i] - '0' > 0) {
                for (int j = 0; j < A[i]; j++) {
                    int t = y[i][j]; //人iのj番目の証言
                    int u = bin[x[i][j] - 1] - '0'; //仮定
                    if (t != u) {
                        //証言が仮定と食い違った
                        ok = 0;
                    }
                }
            }
        }

        if (ok > 0 && hon > ans) ans = hon;
    }

    cout << ans << endl;
    return 0;
}
