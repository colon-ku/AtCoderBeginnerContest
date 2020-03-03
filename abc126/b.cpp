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

bool compare_by_a(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second < a.second;
    }
}

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
    string S;
    cin >> S;
    vector<int> seq(4, 0);
    for (int i = 0; i < 4; i++)
        seq[i] = S[i] - '0';

    string ans;
    int first, second = 0;
    int A, B;
    A = B = 0;
    first = 10*seq[0] + seq[1];
    second = 10*seq[2] + seq[3];

    if (first >= 1 && first <= 12) A = 1;
    if (second >= 1 && second <= 12) B = 1;

    if (A && B) ans = "AMBIGUOUS";
    else if (A) ans = "MMYY";
    else if (B) ans = "YYMM";
    else ans = "NA";

    cout << ans << endl;

    return 0;
}
