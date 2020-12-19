// Link to the Problem
// https://atcoder.jp/contests/abc150/tasks/abc150_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-10 21:00:52 service issue occurred
                2020-01-10 21:04:29
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
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i <= n-3; i++) {
        if (s[i] == 'A') {
            if (s[i+2] - s[i+1] == s[i+1] - s[i] && s[i+1] - s[i] == 1) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
