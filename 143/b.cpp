// Link to the Problem
// https://atcoder.jp/contests/abc143/tasks/abc143_b

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-13 14:53:56
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
    int N;
    cin >> N;
    vector<int> d(N);
    for (int i = 0; i < N; i++)
        cin >> d[i];

    LL ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i < j) {
                ans += d[i]*d[j];
            }
        }
    }

    cout << ans << endl;
    return 0;
}
