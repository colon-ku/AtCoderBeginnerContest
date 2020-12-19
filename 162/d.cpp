// Link to the Problem
// https://atcoder.jp/contests/abc162/tasks/abc162_d
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-12 21:07:10
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
    int n;
    string s;
    cin >> n >> s;

    //0~iにあるR/G/Bの数
    vector<int> acr(n, 0), acg(n, 0), acb(n, 0);
    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c == 'R') acr[i]++;
        if (c == 'G') acg[i]++;
        if (c == 'B') acb[i]++;

        if (i > 0) {
            acr[i] += acr[i-1];
            acg[i] += acg[i-1];
            acb[i] += acb[i-1];
        }
    }

    // for (int i = 0; i < n; i++) {
    //     cout << acr[i] << " " << acg[i] << " " << acb[i] << endl;
    // }

    LL ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            char a, b;
            a = s[i]; b = s[j];

            //'B' < 'G' < 'R'
            if (a > b) {
                swap(a, b);
            }

            int cnt = 0;
            if (a == 'B' && b == 'G') {
                //j+1~n-1にあるRの数を数える. 2j-iは条件を満たさないので除外
                cnt = acr[n-1] - acr[j];
                if (2*j - i >= 0 && j + 1 <= 2*j - i && 2*j - i <= n-1) {
                    if (s[2*j-i] == 'R') cnt--;
                }
            } else if (a == 'B' && b == 'R') {
                cnt = acg[n-1] - acg[j];
                if (2*j - i >= 0 && j + 1 <= 2*j - i && 2*j - i <= n-1) {
                    if (s[2*j-i] == 'G') cnt--;
                }
            } else if (a == 'G' && b == 'R') {
                cnt = acb[n-1] - acb[j];
                if (2*j - i >= 0 && j + 1 <= 2*j - i && 2*j - i <= n-1) {
                    if (s[2*j-i] == 'B') cnt--;
                }
            }

            ans += cnt;
            // cout << a << " " << b << " " << cnt << endl;
        }
    }

    cout << ans << endl;

    return 0;
}
