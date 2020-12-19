# https://atcoder.jp/contests/abc146/tasks/abc146_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-11 22:11:30
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

ostringstream oss_global;
string s_global = oss_global.str();

int main()
{
    int N;
    string S;
    cin >> N >> S;

    string ans = S;
    for (int i = 0; i < S.length(); i++) {
        char c = S[i];
        char d = c + N;

        if (d > 'Z') d -= 26;

        ans[i] = d;
    }

    cout << ans << endl;
    return 0;
}
