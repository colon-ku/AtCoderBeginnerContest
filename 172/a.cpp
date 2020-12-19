// Link to the Problem
// https://atcoder.jp/contests/abc172/tasks/abc172_a
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-08 09:49:31
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int a;
    cin >> a;

    int ans = a + a*a + a*a*a;
    cout << ans << endl;

    return 0;
}