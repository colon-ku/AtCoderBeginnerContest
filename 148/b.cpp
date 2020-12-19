// Link to the Problem
// https://atcoder.jp/contests/abc148/tasks/abc148_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-03 17:21:20
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
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < 2*n; i++) {
        if (i % 2 == 0) {
            cout << s[i/2];
        } else {
            cout << t[(i-1)/2];
        }
    }

    cout << endl;
    return 0;
}
