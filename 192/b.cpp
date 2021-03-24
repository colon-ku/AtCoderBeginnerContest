// Link to the Problem
// https://atcoder.jp/contests/abc192/tasks/abc192_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-24 18:17:56
    cleared at: 2021-03-24 18:21:40
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

int main()
{
    string s;
    cin >> s;

    int diff = 1;
    int n = s.length();

    for (int i = 1; i < n; i += 2) {
        if (s[i] < 'A' || s[i] > 'Z') {
            diff = 0;
        }
    }

    for (int i = 0; i < n; i += 2) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            diff = 0;
        }
    }

    if (diff) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
