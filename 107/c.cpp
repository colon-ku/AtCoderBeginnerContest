// Link to the Problem
// https://atcoder.jp/contests/abc107/tasks/abc107_c

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-04 13:39:00
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
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    int ans = INT_MAX;
    for (int l = 0; l < n - k + 1; l++) {
        int r = l + k - 1;
        int ltime, rtime;
        ltime = abs(x[l]) + abs(x[r] - x[l]);
        rtime = abs(x[r]) + abs(x[r] - x[l]);

        ans = min({ans, ltime, rtime});
    }

    cout << ans << endl;
    return 0;
}
