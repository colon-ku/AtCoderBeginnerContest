# https://atcoder.jp/contests/abc154/tasks/abc154_d
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-02-22 19:02:57
                2020-03-09 22:42:07
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007
#define cout_precision(x) cout << fixed << setprecision(x)

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
    int n, k;
    cin >> n >> k;
    vector<int> p(n+1, 0.0);
    for (int i = 1; i <= n; i++)
        cin >> p[i];

    vector<double> e(n+1, 0.0);
    for (int i = 1; i <= n; i++)
        e[i] = (0.5)*(p[i] + 1);

    vector<double> t(n+1, 0.0);
    for (int i = 1; i <= n; i++)
        t[i] = t[i-1] + e[i];

    double ans = 0.0;
    for (int i = k; i <= n; i++) {
        double sum = t[i] - t[i-k];
        if (ans < sum) ans = sum;
    }

    printf("%.12f\n", ans);
    return 0;
}
