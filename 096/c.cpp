// Link to the Problem
// https://atcoder.jp/contests/abc096/tasks/abc096_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-06 17:28:28
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rev(x) greater<x>()
#define MOD 1000000007
#define INF 50

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

int gcd(int k, int l) {
    if (l > 0) return gcd(l, k%l);
    else return k;
}

struct UnionFind {
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

int h, w;
char s[INF][INF];

int group(int i, int j)
{
    int cnt = 1;
    s[i][j] = '.';

    int v[4][2] = {{i, j-1}, {i-1, j}, {i+1, j}, {i, j+1}};
    for (int k = 0; k < 4; k++) {
        int p, q;
        p = v[k][0]; q = v[k][1];

        if (p >= 0 && p <= h-1 && q >= 0 && q <= w-1) {
            if (s[p][q] == '#') {
                cnt += group(p, q);
            }
        }
    }

    return cnt;
}

void solve()
{
    int ok = 1;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') {
                int g = group(i, j);
                if (g <= 1) {
                    ok = 0;
                }
            }
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main()
{
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        string t;
        cin >> t;
        for (int j = 0; j < w; j++) {
            s[i][j] = t[j];
        }
    }

    solve();

    return 0;
}
