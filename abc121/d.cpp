#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
    LL a, b;
    cin >> a >> b;
    vector<pair<char, char>> p(64);
    char bin[64];
    LL ans = 0;

    for (int i = 63; i >= 0; i--) {
        if (a % 2) {
            p[i].first = 1;
        } else {
            p[i].first = 0;
        }
        if (b % 2) {
            p[i].second = 1;
        } else {
            p[i].second = 0;
        }
    }

    for (int i = 0; i < 64; i++) {
        if (p[i].first + p[i].second == 1) {
            bin[i] = 1;
        } else {
            bin[i] = 0;
        }
    }

    for (int i = 0; i < 64; i++) {
        ans += pow(2, 63 - i);
    }

    cout << ans << endl;
    return 0;
}
