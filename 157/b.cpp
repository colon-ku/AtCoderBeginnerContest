# https://atcoder.jp/contests/abc157/tasks/abc157_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-01 21:01:06
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
    vector<int> evec(3);
    vector<vector<int>> a(3, evec);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (b[k] == a[i][j]) {
                    a[i][j] = 0;
                }
            }
        }
    }

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int det = 0;
    for (int i = 0; i < 3; i++) {
        det = det + a[0][i] * ( a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3]);
    }

    if (det == 0) {
        cout << "Yes" << endl;
    } else {
        if (a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] == 0) {
            cout << "Yes" << endl;
        } else if (a[2][0] == a[1][1] && a[2][0] == a[0][2] && a[2][0] == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
