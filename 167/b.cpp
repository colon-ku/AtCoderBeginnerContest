/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-10 21:01:33
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    long a, b, c, k;
    cin >> a >> b >> c >> k;

    long p, q, r;
    p = min(a, k);
    k -= p;
    q = min(b, k);
    k -= q;
    r = min(c, k);
    
    long ans = p - r;

    cout << ans << endl;

    return 0;
}
