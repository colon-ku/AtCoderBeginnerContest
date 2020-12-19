# https://atcoder.jp/contests/abc184/tasks/abc184_a
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-01 11:13:20
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = a*d - b*c;
    cout << ans << endl;

    return 0;
}
