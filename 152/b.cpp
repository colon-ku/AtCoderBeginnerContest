# https://atcoder.jp/contests/abc152/tasks/abc152_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-19 20:51:03
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
    int a, b;
    cin >> a >> b;

    int ans = a;
    if (a > b) ans = b;

    if (ans == a) {
        for (int i = 0; i < b; i++) {
            cout << a;
        }
        cout << endl;
    } else {
        for (int i = 0; i < a; i++) {
            cout << b;
        }
        cout << endl;
    }

    return 0;
}
