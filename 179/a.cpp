// Link to the Problem
// https://atcoder.jp/contests/abc179/tasks/abc179_a
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-03 17:33:24
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    string s;
    cin >> s;

    cout << s;

    if (s[s.length()-1] != 's') {
        cout << "s" << endl;
    } else {
        cout << "es" << endl;
    }

    return 0;
}
