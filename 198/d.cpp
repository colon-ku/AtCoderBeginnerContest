// Link to the Problem
// https://atcoder.jp/contests/abc198/tasks/abc198_d

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-04-11 21:21:15
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

typedef long long LL;

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

int main()
{
    vector<string> s(3);
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }

    map<char, int> apr;
    for (int i = 0; i < 3; i++) {
        int len = s[i].length();
        for (int j = 0; j < len; j++) {
            apr[s[i][j]]++;
        }
    }

    vector<char> chr;
    for (auto x : apr) {
        if (x.second > 0) {
            chr.push_back(x.first);
        }
    }

    if (chr.size() > 10) {
        cout << "UNSOLVABLE" << endl;
        return 0;
    }

    while (chr.size() < 10) {
        chr.push_back('*');
    }

    sort(all(chr));

    vector<LL> n(3, 0ll);

    do {
        map<char, int> mpg;
        for (int i = 0; i < 10; i++) {
            mpg[chr[i]] = i;
        }

        if (mpg[s[0][0]]*mpg[s[1][0]]*mpg[s[2][0]] == 0) {
            continue;
        }

        vector<LL> x(3, 0ll);

        for (int i = 0; i < 3; i++) {
            LL dgt = 1ll;
            int len = s[i].length();
            for (int j = len-1; j >= 0; j--) {
                x[i] += mpg[s[i][j]]*dgt;
                dgt *= 10;
            }
        }

        if (x[0] + x[1] == x[2]) {
            n = x;
        }
    } while (next_permutation(all(chr)));

    if (n[0]*n[1]*n[2] > 0) {
        for (int i = 0; i < 3; i++) {
            cout << n[i] << endl;
        }
    } else {
        cout << "UNSOLVABLE" << endl;
    }

    return 0;
}
