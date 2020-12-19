# https://atcoder.jp/contests/abc160/tasks/abc160_d
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-03-28 21:12:16
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
    int n, x, y;
    cin >> n >> x >> y;

    map<pair<int, int>, int> dist;
    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            pair<int, int> edge = make_pair(i, j);
            
            if (i <= x && j >= y) {
                dist[edge] = j - i + x - y + 1;
            } else if (i <= x) {
                int a, b;
                a = j - i;
                b = x + y - i - j + 1;

                dist[edge] = min(a, b);
            } else if (j >= y) {
                int a, b;
                a = j - i;
                b = i + j - x - y + 1;

                dist[edge] = min(a, b);
            } else {
                int a, b;
                a = j - i;
                b = i - j - x + y + 1;

                dist[edge] = min(a, b);
            }
        }
    }

    vector<int> ans(n, 0);
    for (const auto& x : dist) {
        int d = x.second;
        ans[d]++;
    }

    for (int k = 1; k <= n-1; k++)
        cout << ans[k] << endl;

    return 0;
}
