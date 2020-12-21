// Link to the Problem
// https://atcoder.jp/contests/abc151/tasks/abc151_b

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-12 21:01:08
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
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n-1);
    for (int i = 0; i < n-1; i++)
        cin >> a[i];

    int sum = 0;
    for (int i = 0; i < n-1; i++)
        sum += a[i];
    
    int x = n*m - sum;
    int ans;
    if (x < 0) {
        ans = 0;
    } else if (x <= k) {
        ans = x;
    } else {
        ans = -1;
    }

    cout << ans << endl;
    return 0;
}
