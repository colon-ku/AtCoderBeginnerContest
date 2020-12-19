// Link to the Problem
// https://atcoder.jp/contests/abc150/tasks/abc150_d
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-13 17:16:45
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rev(x) greater<x>()
#define MOD 1000000007
#define INF 1000000000

typedef long long LL;
typedef long double LD;

LL gcd(LL k, LL l)
{
    if (l > 0) return gcd(l, k%l);
    else return k;
}

int bin_pow(int n)
{
    if (n % 2 == 0) return 1 + bin_pow(n/2);
    else return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ok = 1;
    int b = bin_pow(a[0]);
    LL lcm = a[0]/2;
    for (int i = 1; i < n; i++) {
        lcm *= ((LL)a[i]/2)/(gcd(lcm, a[i]/2));
        if (b != bin_pow(a[i]) || lcm <= 0 || lcm > m) ok = 0;
    }

    int ans = 0;
    for (int t = 1; lcm*t <= m; t += 2)
        ans += ok;

    cout << ans << endl;

    return 0;
}
