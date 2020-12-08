/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-08 09:51:24
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    string s, t;
    cin >> s >> t;

    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) ans++;
    }

    cout << ans << endl;

    return 0;
}
