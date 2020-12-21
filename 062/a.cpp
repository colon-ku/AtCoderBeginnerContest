// Link to the Problem
// https://atcoder.jp/contests/abc062/tasks/abc062_a

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-01 22:53:07
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
    int x, y;
    cin >> x >> y;

    vector<int> a, b;
    a = {1, 3, 5, 7, 8, 10, 12};
    b = {4, 6, 9, 11};

    int X, Y;
    for (int i = 0; i < a.size(); i++) {
        if (x == a[i]) X = 0;
        if (y == a[i]) Y = 0;
    }
    for (int i = 0; i < b.size(); i++) {
        if (x == b[i]) X = 1;
        if (y == b[i]) Y = 1;
    }
    if (x == 2) X = 2;
    if (y == 2) Y = 2;

    if (X == Y) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
