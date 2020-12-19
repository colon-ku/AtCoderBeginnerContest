// Link to the Problem
// https://atcoder.jp/contests/abc152/tasks/abc152_c
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-19 20:54:19
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
    vector<int> p(n);
    for (int i = 0; i < n; i++) 
        cin >> p[i];

    int max, min, ans;
    max = -1;
    min = INT_MAX;
    ans = 0;
    for (int i = 0; i < n; i++) {
        int ok = 1;
        if (p[i] > max) {
            if (i > 0) ok = 0;
            max = p[i];
        }
        if (p[i] > min) {
            ok = 0;
        }
        if (p[i] < min) {
            min = p[i];
        }


        if (ok) ans++;
    }

    cout << ans << endl;
    return 0;
}
