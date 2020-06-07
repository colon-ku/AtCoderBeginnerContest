/*
    飲んだ魔剤で家が建つ。
    created at: 2020-06-07 21:32:19
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    string s;
    cin >> s;

    string ans;
    char c = s[s.length()-1] - '0';
    if (c == 3) {
        ans = "bon";
    } else if (c == 0 || c == 1 || c == 6 || c == 8) {
        ans = "pon";
    } else {
        ans = "hon";
    }

    cout << ans << endl;

    return 0;
}
