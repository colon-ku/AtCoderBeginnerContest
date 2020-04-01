/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-01 22:11:42
                2020-04-01 22:52:01
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rev(x) greater<(x)>()
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

int gcd(int k, int l) {
    if (l > 0) return gcd(l, k%l);
    else return k;
}

ostringstream oss_global;
string s_global = oss_global.str();

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    int a, b, c;
    a = b = c = 0;

    if (s[0] == 'A') a = 1;

    int cnt = 0;
    for (int i = 2; i <= n-2; i++) {
        if (s[i] == 'C') cnt++;
    }
    if (cnt == 1) b = 1;

    if (a && b) {
        int flag = 1;
        for (int i = 1; i < n; i++) {
            char d = s[i];
            if (d == 'A' || d == 'B' || d >= 'D' && d <= 'Z') flag = 0;
        }
        if (flag) c = 1;
    }

    if (c) cout << "AC" << endl;
    else cout << "WA" << endl;

    return 0;
}
