/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-29 21:06:24
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
    int x;
    cin >> x;

    int ans;
    for (int i = x; i < 2*x; i++) {
        int notok = 0;
        for (int j = 2; j < sqrt(x); j++) {
            if (i % j == 0) notok = 1;
        }

        if (notok) {
            ;
        } else {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
