// Link to the Problem
// https://atcoder.jp/contests/abc150/tasks/abc150_a
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-10 20:59:44
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
    int k, x;
    cin >> k >> x;

    if (k*500 >= x) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
