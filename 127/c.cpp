// Link to the Problem
// https://atcoder.jp/contests/abc127/tasks/abc127_c

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-17 20:47:30
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
    int N, M;
    cin >> N >> M;
    vector<int> L(M), R(M);
    for (int i = 0; i < M; i++)
        cin >> L[i] >> R[i];

    int l, r;
    l = *max_element(all(L));
    r = *min_element(all(R));

    int ans = 0;
    if (l <= r) ans = r - l + 1;

    cout << ans << endl;
    return 0;
}
