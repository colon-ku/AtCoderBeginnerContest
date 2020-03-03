/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 
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
    long a, b, k;
    cin >> a >> b >> k;

    if (a < k) {
        k -= a;
        a = 0;
        
        if (b < k) {
            b = 0;
        } else {
            b -= k;
        }
    } else {
        a -= k;
    }

    cout << a << " " << b << endl;
    return 0;
}
