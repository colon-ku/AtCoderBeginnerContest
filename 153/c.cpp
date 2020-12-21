// Link to the Problem
// https://atcoder.jp/contests/abc153/tasks/abc153_c

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-26 21:03:15
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
    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];

    sort(all(h));
    reverse(all(h));
    
    LL ans = 0;
    for (int i = 0; i < n; i++) {
        if (i >= k) {
            ans += h[i];
        }
    }

    cout << ans << endl;
    return 0;
}
