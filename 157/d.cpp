// Link to the Problem
// https://atcoder.jp/contests/abc157/tasks/abc157_d

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-13 13:06:55
                2020-04-13 14:12:37 余計な部分を削った版
*/

#include <bits/stdc++.h>
using namespace std;

struct UnionFind
{
    vector<int> par;

    UnionFind(int n) : par(n, -1) {}

    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }

    bool unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return false;
        if (par[rx] > par[ry]) swap(rx, ry);
        par[rx] += par[ry];
        par[ry] = rx;

        return true;
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }

    int size(int x) {
        int rx = root(x);
        return -par[rx];
    }
};

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), b(m), c(k), d(k);
    for (int i = 0; i < m; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < k; i++)
        cin >> c[i] >> d[i];

    UnionFind tr(n);
    for (int i = 0; i < m; i++) {
        tr.unite(a[i]-1, b[i]-1);
    }

    vector<set<int>> notf(n);
    for (int i = 0; i < m; i++) {
        notf[a[i]-1].insert(b[i]-1);
        notf[b[i]-1].insert(a[i]-1);
    }
    for (int i = 0; i < k; i++) {
        if (tr.same(c[i]-1, d[i]-1)) {
            notf[c[i]-1].insert(d[i]-1);
            notf[d[i]-1].insert(c[i]-1);
        }
    }
    
    for (int i = 0; i < n; i++) {
        int ans = tr.size(i) - notf[i].size() - 1;
        cout << ans << " ";
    }
    cout << endl;

    return 0;
}
