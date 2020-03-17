/*
    飲んだ魔剤で家が建つ。
    created at: 2020-03-17 13:16:17
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
    string s;
    cin >> s;

    int n = s.length();
    char c[4] = {'A', 'C', 'G', 'T'};
    int m, temp;
    m = temp = 0;
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < 4; j++) {
            if (s[i] == c[j]) {
                found = 1;
            }
        }

        if (found) {
            temp++;
        } else {
            if (m < temp) {
                m = temp;
            }

            temp = 0;
        }
    }

    if (m < temp) m = temp;

    cout << m << endl;

    return 0;
}
