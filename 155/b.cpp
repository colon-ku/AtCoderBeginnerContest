# https://atcoder.jp/contests/abc155/tasks/abc155_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-01 17:31:53
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ok = 1;
    for (int i = 0; i < n; i++) {
        int k = a[i];
        if (k % 2 == 0) {
            if (k % 3 == 0 || k % 5 == 0) {
                ;
            } else {
                ok = 0;
            }
        }
    }

    if (ok) {
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }

    return 0;
}
