# https://atcoder.jp/contests/abc120/tasks/abc120_c
#include <bits/stdc++.h>
#include <string>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

int main()
{
    string s;
    cin >> s;
    int r, w, ans;
    r = 0; w = 0; ans = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') r++;
        else w++;
    }

    ans = 2*min(r, w);

    cout << ans << endl;
    return 0;
}
