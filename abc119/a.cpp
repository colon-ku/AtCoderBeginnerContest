/*
  ∧,,∧
( 'ω' )つ ＜またお前か！！
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

int main()
{
    string s;
    cin >> s;
    int y, m, d;
    string ans;
    y = 1000*(s[0] - '0') + 100*(s[1] - '0') - 10*(s[2] - '0') - (s[3] - '0');
    m = 10*(s[5] - '0') - (s[6] - '0');
    d = 10*(s[8] - '0') - (s[9] - '0');

    cout << y << endl;
    cout << m << endl;
    cout << d << endl;

    if (y >= 2019) {
        if (m >= 5) ans = "TBD";
        else ans = "Heisei";
    } else {
        ans = "Heisei";
    }

    cout << ans << endl;

    return 0;
}
