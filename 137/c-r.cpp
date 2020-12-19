// Link to the Problem
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
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++) {
        string str = s[i];
        vector<char> chs;

        for (int k = 0; k < 10; k++)
            chs.push_back(s[i][k]);

        sort(all(chs));

        for (int k = 0; k < 10; k++)
            s[i][k] = chs[k];
    }

    sort(all(s));

    int members = 1;
    vector<int> group;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i-1]) {
            group.push_back(members);
            members = 1;
        } else {
            members++;
        }
    }
    group.push_back(members);

    LL ans = 0;
    for (int i = 0; i < group.size(); i++) {
        int g = group[i];
        ans += ((LL)g*g - g)/2;
    }

    cout << ans << endl;

    return 0;
}
