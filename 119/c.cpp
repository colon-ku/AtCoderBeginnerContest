/*
    飲んだ魔剤で家が建つ。
    created at: 2020-03-18 00:18:32
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007
#define INF 1000000000

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

int n, a, b, c, l[INF];

int dfs(int cur, int x, int y, int z) {
    if (cur >= n) {
        if (x > 0 && y > 0 && z > 0) {
            int ret = 0;
            ret += abs(a-x);
            ret += abs(b-y);
            ret += abs(c-z);
            ret -= 30;
            return ret;
        } else {
            return INF;
        }
    } else {
        int ret0, ret1, ret2, ret3;
        ret0 = dfs(cur+1, x, y, z);
        ret1 = dfs(cur+1, x + l[cur], y, z) + 10;
        ret2 = dfs(cur+1, x, y + l[cur], z) + 10;
        ret3 = dfs(cur+1, x, y, z + l[cur]) + 10;

        int ret = min({ret0, ret1, ret2, ret3});
        return ret;
    }
}

int main()
{
    cin >> n >> a >> b >> c;
    for (int i = 0; i < n; i++)
        cin >> l[i];

    int ans = dfs(0, 0, 0, 0);
    cout << ans << endl;

    return 0;
}
