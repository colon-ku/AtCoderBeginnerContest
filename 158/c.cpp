/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-07 21:06:41
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

    int ans = -1;
    int con = 1;
    for (int p = 1; con; p++) {
        int ta, tb;
        
        ta = 2*p/25;
        tb = p/10;

        if (a == ta && b == tb) {
            ans = p;
            con = 0;
        } else if (a < ta || b < tb) {
            con = 0;
        }
    }

    cout << ans << endl;

    return 0;
}
