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
    string S;
    cin >> S;

    vector<int> count(('Z'-'A'), 0);

    for (int i = 0; i < 4; i++)
        count[S[i]-'A']++;

    int flag = 0;
    for (int i = 0; i <= count.size(); i++) {
        if (count[i] == 2 || count[i] == 0) {
            ;
        } else {
            flag = 1;
        }
    }

    if (flag) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    // 
    // for (int i = 0; i <= count.size(); i++)
    //     cout << (char)(i + 'A') << " " << count[i] << endl;
    //

    return 0;
}
