/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-04 13:50:12
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

    int m = 0;
    for (int i = 0; i < s.length(); i++) {
        m = (m + s[i] - '0') % 9;
    }

    if (m % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
