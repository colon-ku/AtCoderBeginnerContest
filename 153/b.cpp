// Link to the Problem
// https://atcoder.jp/contests/abc153/tasks/abc153_b

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-26 21:01:15
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
    int h, n;
    cin >> h >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    if (sum >= h) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
