#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int par[INT_MAX]; //親の番号

//n要素で初期化
void init(int n) {
    for (int i = 0; i < n; i++) par[i] = i;
}

//木の根を求める
int root(int x) {
    if (par[x] == x) { //根
        return x;
    } else {           //経路圧縮
        return par[x] = root(par[x]);
    }
}

//xとyが同じ集合に属するか否か
bool same(int x, int y) {
    return root(x) == root(y);
}

//xとyの属する集合を併合
void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return;

    par[x] = y;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> p(q), a(q), b(q);
    for (int i = 0; i < q; i++)
        cin >> p[i] >> a[i] >> b[i];

    init(n);

    for (int i = 0; i < q; i++) {
        if (p[i] == 0) {
            unite(a[i], b[i]);
        } else {
            if (same(a[i], b[i])) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}