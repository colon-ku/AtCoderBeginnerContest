// Link to the Problem
// https://atcoder.jp/contests/abc131/tasks/abc131_a

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-15 22:57:23
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
    string S;
    cin >> S;

    string ans = "Good";
    for (int i = 0; i < 3; i++) {
        if (S[i] == S[i+1]) {
            ans = "Bad";
        }
    }

    cout << ans << endl;
    return 0;
}
