// Link to the Problem
// https://atcoder.jp/contests/abc184/tasks/abc184_b
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-01 11:13:56
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, x;
    string s;
    cin >> n >> x >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') {
            x++;
        } else {
            x = max(0, --x);
        }
    }

    cout << x << endl;

    return 0;
}
