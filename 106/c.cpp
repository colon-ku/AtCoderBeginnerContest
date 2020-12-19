# https://atcoder.jp/contests/abc106/tasks/abc106_c
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-04 16:19:24
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
    long k;
    cin >> s >> k;

    char ans;
    for (int i = 0; i < s.length(); i++) {
        int c = s[i] - '0';
        if (c <= 1) {
            if (k > 1) k--;
            else {
                ans = c + '0';
                break;
            }
        } else {
            ans = c + '0';
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
