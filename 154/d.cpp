/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-02-22 19:02:57
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
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());

    int n, k;
    cin >> n >> k;
    vector<int> p(n+1);
    for (int i = 1; i <= n; i++)
        cin >> p[i];

    vector<float> t(n+1, 0.0);
    for (int i = 1; i <= n; i++) {
        float e = (0.5)*( p[i] + 1 );
        t[i] = t[i-1] + e;
    }

    float ans = t[k];
    for (int i = k; i <= n; i++) {
        float s = t[i] - t[i-k];
        if (s > ans) ans = s;
    }

    printf("%.12f\n", ans);
    return 0;
}
