/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-19 22:32:53

  refer to: https://atcoder.jp/contests/abc152/submissions/9630413
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

vector<int> slice_n(int n) {
    vector<int> v;
    while (n > 0) {
        v.push_back(n%10);
        n /= 10;
    }
    reverse(all(v));
    return v;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v(10, vector<int>(10,0));
    for (int i = 0; i < n; i++) {
        int x = i+1;
        string s = to_string(x);
        v[s.front()-'0'][s.back()-'0']++;
    }

    int ans = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            ans += v[i][j]*v[j][i];
        }
    }

    cout << ans << endl;
    return 0;
}
