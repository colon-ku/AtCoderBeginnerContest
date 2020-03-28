/*
    飲んだ魔剤で家が建つ。
    created at: 2020-03-28 20:30:25
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007
#define INF 1000000

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

LL modpower(LL n, LL m, LL mod) {
    if (m == 0) {
        return 1;
    } else if (m % 2 == 0) {
        LL p = modpower(n, m/2, mod);
        return p*p % mod;
    } else {
        return n*modpower(n, m-1, mod) % mod;
    }
}

LL modinv(LL n, LL mod) {
    return modpower(n, mod-2, mod);
}

LL modcombination(LL n, LL r, LL mod) {
    LL ret = 1;

    for (int i = 0; i < r; i++) {
        ret *= (n-i);
        ret %= mod;
        ret *= modinv(i+1, mod);
        ret % mod;
    }

    return ret % mod;
}

ostringstream oss_global;
string s_global = oss_global.str();

LL f(LL n) {
    if (n % 2 == 0) return n/2;
    else return 3*n + 1;
}

int main()
{
    int s;
    cin >> s;

    map<LL, int> memo;
    int ans;
    LL prev;
    for (int i = 1; i <= INF; i++) {
        if (i == 1) {
            memo[s]++;
            prev = s;
        } else {
            LL temp = f(prev);
            if (memo[temp] > 0) {
                ans = i;
                break;
            } else {
                memo[temp]++;
                prev = temp;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
