# https://atcoder.jp/contests/abc154/tasks/abc154_c
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-02-22 18:59:41
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
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(all(a));

    int ok = 1;
    for (int i = 0; i < n-1; i++) {
        if (a[i] == a[i+1]) {
            ok = 0;
        }
    }

    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
