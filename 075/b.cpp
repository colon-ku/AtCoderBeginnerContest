/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-12 13:11:13
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
    int h, w;
    cin >> h >> w;
    char coor[h][w];
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < w; j++) {
            coor[i][j] = s[j];
        }
    }

    int v[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (coor[i][j] == '.') {
                int cnt = 0;
                for (int k = 0; k < 8; k++) {
                    int x, y;
                    x = i+v[k][0]; y = j+v[k][1];
                    if (x >= 0 && x <= h-1 && y >= 0 && y <= w-1) {
                        if (coor[x][y] == '#') cnt++;
                    }
                }

                coor[i][j] = cnt + '0';
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << coor[i][j];
        }
        cout << endl;
    }

    return 0;
}
