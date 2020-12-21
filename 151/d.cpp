// Link to the Problem
// https://atcoder.jp/contests/abc151/tasks/abc151_d

/*
    飲んだ魔剤で家が建つ。
    created at: 
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

ostringstream oss_global;
string s_global = oss_global.str();

int main()
{
    int h, w;
    cin >> h >> w;
    vector<char> putty(w+2, '#');
    vector<vector<char>> maze(h+2, putty); //初期状態ではすべて壁で埋められている
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < w; j++) {
            if (s[j] == '.') maze[i+1][j+1] = '.';
        }
    }

    int ans = 0;
    int dir[4][2] = {{-1,0},{0,-1},{0,1},{1,0}};
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            //選ばれたセルが通路のとき、探索開始
            if (maze[i][j] == '.') {
                for (int x = 1; x <= h; x++) {
                    for (int y = 1; y <= w; y++) {
                        //探索対象が通路であり、かつ根ノードと異なる
                        if (maze[x][y] == '.' && (i - x || j - y)) {
                            int dist[h+2][w+2] = {0};
                            int visit[h+2][w+2] = {0};

                            pair<int, int> v = make_pair(i, j);
                            queue<pair<int, int>> q;
                            visit[v.first][v.second] = 1;
                            q.push(v);

                            while (!q.empty()) {
                                pair<int, int> node = q.front();
                                q.pop();

                                if (node.first == x && node.second == y) break;

                                for (int k = 0; k < 4; k++) {
                                    pair<int, int> adj = make_pair(node.first+dir[k][0], node.second+dir[k][1]);
                                    if (maze[adj.first][adj.second] == '.' && visit[adj.first][adj.second] == 0) {
                                        dist[adj.first][adj.second] = dist[node.first][node.second] + 1;
                                        visit[adj.first][adj.second] = 1;
                                        q.push(adj);

                                        // cout << "根ノード：" << v.first << " " << v.second << endl;
                                        // cout << "探索対象：" << x << " " << y << endl;
                                        // cout << "　キュー：" << node.first << " " << node.second << endl;
                                        // cout << "　　近接：" << adj.first << " " << adj.second << endl;
                                        // cout << "　　距離：" << dist[adj.first][adj.second] << endl << endl;
                                    }
                                }
                            }

                            int d = dist[x][y];
                            if (ans < d) ans = d;
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
