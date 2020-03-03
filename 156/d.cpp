/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: ;2020-02-22 21:12:49
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007

typedef long long LL;
typedef long double LD;

bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

ostringstream oss_global;
string s_global = oss_global.str();

LL factorial(LL n, LL p) {
    
}

int main()
{
    LL n, a, b;
    cin >> n >> a >> b;

    LL ans = ((1<<n)-1) % MOD;
    ans -= factorial(n, MOD)/( factorial(a, MOD) * factorial(n-a, MOD) ) % MOD;
    ans -= factorial(n, MOD)/( factorial(b, MOD) * factorial(n-b, MOD) ) % MOD;

    cout << ans << endl;
    return 0;
}
