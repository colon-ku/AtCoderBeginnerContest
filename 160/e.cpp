// Link to the Problem
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-03-28 21:36:13
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
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    vector<LL> p(a), q(b), r(c);
    for (int i = 0; i < a; i++)
        cin >> p[i];
    for (int i = 0; i < b; i++)
        cin >> q[i];
    for (int i = 0; i < c; i++)
        cin >> r[i];

    sort(all(p), greater<LL>());
    sort(all(q), greater<LL>());
    sort(all(r), greater<LL>());

    LL ans = 0;
    int ia, ib, ic;
    ia = ib = ic = 0;

    while (x > 0) {
        x--;
        
        if (ia >= a) {
            ans += r[ic++];
        } else if (ic >= c) {
            ans += p[ia++];
        } else {
            LL v, w;
            v = p[ia]; w = r[ic];

            if (v < w) ans += r[ic++];
            else ans += p[ia++];
        }
    }

    while (y > 0) {
        y--;

        if (ib >= a) {
            ans += r[ic++];
        } else if (ic >= c) {
            ans += q[ib++];
        } else {
            LL v, w;
            v = q[ib]; w = r[ic];

            if (v < w) ans += r[ic++];
            else ans += q[ib++];
        }
    }

    while (x > 0 && y > 0) {
        int u, v, w;
        u = v = w = 0;
        if (ia < a) u = p[ia];
        if (ib < b) v = q[ib];
        if (ic < c) w = r[ic];

        int m = max({u, v, w});
        if (u == m) {
            x--;
            ans += p[ia++];
        } else if (v == m) {
            y--;
            ans += q[ib++];
        } else {
            
        }
    }

    cout << ans << endl;

    return 0;
}
