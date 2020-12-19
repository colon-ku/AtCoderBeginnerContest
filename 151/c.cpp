# https://atcoder.jp/contests/abc151/tasks/abc151_c
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-12 21:06:00
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
    int n, m;
    cin >> n >> m;
    vector<int> p(m);
    vector<string> s(m);
    for (int i = 0; i < m; i++)
        cin >> p[i] >> s[i];

    vector<int> cleared(n, 0), penalty(n, 0);
    for (int i = 0; i < m; i++) {
        if (s[i] == "AC") {
            cleared[p[i]-1] = 1;
        } else {
            if (cleared[p[i]-1]) {
                ;
            } else {
                penalty[p[i]-1]++;
            }
        }
    }

    int cle, pen;
    cle = pen = 0;
    for (int i = 0; i < n; i++) {
        if (cleared[i]) {
            cle++;
            pen += penalty[i];
        }
    }

    cout << cle << " " << pen << endl;
    return 0;
}
