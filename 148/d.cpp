// Link to the Problem
// https://atcoder.jp/contests/abc148/tasks/abc148_d
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-03 17:29:11
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cur = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == cur) {
            cur++;
        }
    }

    int ans;
    if (cur > 1) {
        ans = n - cur + 1;
    } else {
        ans = -1;
    }

    cout << ans << endl;
    return 0;
}
