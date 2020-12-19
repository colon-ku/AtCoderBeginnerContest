# https://atcoder.jp/contests/abc136/tasks/abc136_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-03-14 21:19:01
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
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];

    int ok = 1;
    for (int i = n-1; i >= 1; i--) {
        int diff = h[i] - h[i-1];
    
        if (diff < -1) {
            ok = 0;
        } else if (diff == -1) {
            h[i-1]--;
        }
    }

    for (int i = 0; i < n-1; i++) {
        if (h[i] > h[i+1]) ok = 0;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
