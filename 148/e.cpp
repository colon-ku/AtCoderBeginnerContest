/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-03 17:38:55
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
    LL n, ans;
    cin >> n;

    ans = 0;
    if (n % 2 == 0) {

        for (int i = 0; n/(10*pow(5, i)) != 0; i++) {
            LL a = 10*pow(5, i);
            ans += n/a;
        }

    }

    cout << ans << endl;
    return 0;
}
