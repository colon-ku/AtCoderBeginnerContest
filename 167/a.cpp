/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-10 20:53:28
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

    int n = s.length();
    int ok = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) ok = 0;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
