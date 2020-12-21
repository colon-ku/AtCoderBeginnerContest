// Link to the Problem
// https://atcoder.jp/contests/abc171/tasks/abc171_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-09 18:18:52
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000000001

int main()
{
    long n;
    cin >> n;

    string ans;
    while (n-- > 0l) {
        ans = (char)(n%26l + 97l) + ans;
        n /= 26l;
    }

    cout << ans << endl;

    return 0;
}
