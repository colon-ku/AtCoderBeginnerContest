/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-19 21:06:30
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
        for (int i = 0; i < n; i++) par[i] = 0;
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

    void connect(int x, int y) {
        //x は yの上司
        par[y] = x;
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }

    int sub(int x) {
        int sum = 0;
        for (int i = 0; i < par.size(); i++) {
            if (par[i] == x) sum++;
        }

        return sum;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> a(n-1);
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    map<int, int> sub;
    for (int i = 0; i < n-1; i++) {
        sub[a[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (sub[i] > 0) cout << sub[i] << endl;
        else cout << 0 << endl;
    }

    return 0;
}
