/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-02-22 20:38:23
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
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && a != c ||
        a == c && a != b ||
        b == c && a != b) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

    return 0;
}
