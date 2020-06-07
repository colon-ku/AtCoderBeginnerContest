/*
    飲んだ魔剤で家が建つ。
    created at: 2020-06-07 21:36:48
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int k;
    string s;
    cin >> k >> s;

    if (k >= s.length()) {
        cout << s << endl;
    } else {
        for (int i = 0; i < k; i++) {
            cout << s[i];
        }
        cout << "..." << endl;
    }

    return 0;
}
