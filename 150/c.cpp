// Link to the Problem
// https://atcoder.jp/contests/abc150/tasks/abc150_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-03-11 20:19:28
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

int factorial(int n) {
    int ret = 1;
    for (int i = 2; i <= n; i++)
        ret *= i;
    
    return ret;
}

ostringstream oss_global;
string s_global = oss_global.str();

int main()
{
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        cin >> q[i];

    int a, b;
    a = b = 0;
    vector<int> v(n);
    iota(all(v), 1);
    do {
        
        //v, pを比較
        for (int i = 0; i < n; i++) {
            int diff = v[i] - p[i];
            if (diff < 0) {
                a++;
                break;
            } else if (diff > 0) break;
        }

        //v, qを比較
        for (int i = 0; i < n; i++) {
            int diff = v[i] - q[i];
            if (diff < 0) {
                b++;
                break;
            } else if (diff > 0) break;
        }
        
    } while (next_permutation(all(v)));

    cout << abs(a - b) << endl;

    return 0;
}
