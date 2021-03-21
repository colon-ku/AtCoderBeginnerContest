// Link to the Problem
// https://atcoder.jp/contests/abc196/tasks/abc196_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-20 21:01:03
    cleared at: 
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

    int n = s.length();
    int prd = n;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            prd = i;
            break;
        }
    }

    for (int i = 0; i < prd; i++) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
