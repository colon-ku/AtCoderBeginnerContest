// Link to the Problem
// https://atcoder.jp/contests/abc098/tasks/abc098_b
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-05 15:13:42
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
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 1; i <= n-1; i++) {
        int left[256], right[256];
        for (char c = 'a'; c <= 'z'; c++)
            left[c] = right[c] = 0;

        //左からカウント
        for (int j = 0; j < i; j++) left[s[j]]++;
        //右からカウント
        for (int j = n-1; j > i-1; j--) right[s[j]]++;

        int cnt = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            if (left[c] > 0 && right[c] > 0) cnt++;
        }
        if (ans < cnt) ans = cnt;
    }

    cout << ans << endl;

    return 0;
}
