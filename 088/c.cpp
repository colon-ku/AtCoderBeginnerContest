/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-10 21:52:47
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rev(x) greater<x>()
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

LL modpower(LL n, LL m, LL mod)
{
    if (m == 0) {
        return 1;
    } else if (m % 2 == 0) {
        LL p = modpower(n, m/2, mod);
        return p*p % mod;
    } else {
        return n*modpower(n, m-1, mod) % mod;
    }
}

LL modinv(LL n, LL mod)
{
    return modpower(n, mod-2, mod);
}

LL modcombination(LL n, LL r, LL mod)
{
    LL ret = 1;

    for (int i = 0; i < r; i++) {
        ret *= (n-i);
        ret %= mod;
        ret *= modinv(i+1, mod);
        ret % mod;
    }

    return ret % mod;
}

int gcd(int k, int l)
{
    if (l > 0) return gcd(l, k%l);
    else return k;
}

struct UnionFind
{
    vector<int> par;

    UnionFind(int n) : par(n) {
        for (int i = 0; i < n; i++) par[i] = i;
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main()
{
    vector<vector<int>> c(3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int d;
            cin >> d;
            c[i].push_back(d);
        }
    }

    vector<int> a(3), b(3);
    string ans = "No";
    for (a[0] = 0; a[0] <= 100; a[0]++) {
        for (a[1] = 0; a[1] <= 100; a[1]++) {
            for (a[2] = 0; a[2] <= 100; a[2]++) {
                int ok = 1;
                for (int j = 0; j < 3; j++) {
                    if (c[0][j] - a[0] != c[1][j] - a[1] ||
                        c[1][j] - a[1] != c[2][j] - a[2]) {
                            ok = 0;
                    }
                }

                if (ok) ans = "Yes";
            }
        }
    }

    cout << ans << endl;

    return 0;
}
