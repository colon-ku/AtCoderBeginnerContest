// Link to the Problem
// https://atcoder.jp/contests/abc154/tasks/abc154_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-02-22 18:58:22
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
    string s;
    cin >> s;

    int x = s.length();
    for (int i = 0; i < x; i++)
        cout << "x";
    cout << endl;

    return 0;
}
