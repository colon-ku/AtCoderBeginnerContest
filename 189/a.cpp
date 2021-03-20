// Link to the Problem
// https://atcoder.jp/contests/abc189/tasks/abc189_a

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-14 11:39:00
    cleared at: 2021-03-14 11:40:46
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

    if (s[0] == s[1] && s[1] == s[2]) {
        cout << "Won" << endl;
    } else {
        cout << "Lost" << endl;
    }

    return 0;
}
