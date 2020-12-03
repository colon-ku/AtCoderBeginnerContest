/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-03 18:44:16
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    long a, b, c, d;
    cin >> a >> b >> c >> d;

    long ans = a*c;
    ans = max(ans, a*d);
    ans = max(ans, b*c);
    ans = max(ans, b*d);

    cout << ans << endl;

    return 0;
}
