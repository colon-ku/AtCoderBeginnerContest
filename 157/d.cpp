/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-01 21:33:41
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007

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

ostringstream oss_global;
string s_global = oss_global.str();

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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), b(m), c(k), d(k);
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> c[i] >> d[i];
    }

    init(n);

    for (int i = 0; i < m; i++) {
        unite(a[i], b[i]);
    }

    vector<int> ans(n, 0);
    for (int i = 1; i <= n-1; i++) {
        for (int j = i+1; j <= n; j++) {
            for (int l = 0; l < m; l++) {
                for (int x = 0; x < k; x++) {
                    if (!(i == a[l] && j == b[l] || i == b[l] && j == a[l])) {
                        if (!(i == c[x] && j == d[x] || i == d[x] && j == c[x])) {
                            if (same(i, j)) {
                                ans[i-1]++;
                                ans[j-1]++;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}
