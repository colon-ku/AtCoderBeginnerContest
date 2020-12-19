# https://atcoder.jp/contests/abc084/tasks/abc084_d
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-12 10:36:40
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rev(x) greater<x>()
#define MOD 1000000007
#define INF 100000

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

LL modpower(LL n, LL m, LL mod)
{
    if (m == 0) {
        return 1;
    } else if (m % 2 == 0) {
        LL p = modpower(n, m/2, mod);
        return p*p % mod;
    } else {
        return n*modpower(n, m-1, mod) % mod;
    }
}

LL modinv(LL n, LL mod)
{
    return modpower(n, mod-2, mod);
}

LL modcombination(LL n, LL r, LL mod)
{
    LL ret = 1;

    for (int i = 0; i < r; i++) {
        ret *= (n-i);
        ret %= mod;
        ret *= modinv(i+1, mod);
        ret % mod;
    }

    return ret % mod;
}

int gcd(int k, int l)
{
    if (l > 0) return gcd(l, k%l);
    else return k;
}

map<int, int> pr;
vector<int> qr;

void find_prime()
{
    pr[2]++;

    for (int i = 3; i < INF; i += 2) {
        int sq = sqrt(i);
        int ok = 1;
        for (int j = 3; j <= sq; j++) {
            if (i % j == 0) ok = 0;
        }

        if (ok) pr[i]++;
    }
}

void find_qrime()
{
    for (const auto &x : pr) {
        int y = (x.first + 1)/2;
        if (pr[y] > 0) qr.push_back(x.first);
    }
}

int main()
{
    int q;
    cin >> q;
    vector<int> l(q), r(q);
    for (int i = 0; i < q; i++)
        cin >> l[i] >> r[i];

    find_prime();
    find_qrime();

    int n = qr.size();
    for (int i = 0; i < q; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (qr[j] >= l[i] && qr[j] <= r[i]) {
                cnt++;
            }
        }

        cout << cnt << endl;
    }    

    return 0;
}
