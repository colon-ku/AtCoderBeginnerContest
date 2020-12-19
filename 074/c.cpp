# https://atcoder.jp/contests/abc074/tasks/abc074_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-12 18:30:16
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
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    map<int, int> x_set;
    for (int i = 0; 100*a*i <= f; i++) {
        for (int j = 0; 100*a*i + 100*b*j <= f; j++) {
            x_set[100*a*i + 100*b*j]++;
        }
    }

    map<int, int> y_set;
    for (int i = 0; c*i <= f; i++) {
        for (int j = 0; c*i + d*j <= f; j++) {
            y_set[c*i + d*j]++;
        }
    }

    double max = 0.0;
    double ide = 100.0*e/(100 + e);
    int ans[2] = {0};
    for (const auto &x : x_set) {
        for (const auto &y : y_set) {
            if (x.first + y.first <= f) {
                double conc = 100.0*y.first/(x.first + y.first);
                if (conc > max && conc <= ide) {
                    max = conc;
                    ans[0] = x.first;
                    ans[1] = y.first;
                }
            }
        }
    }

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
