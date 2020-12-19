# https://atcoder.jp/contests/abc152/tasks/abc152_d
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-19 21:09:59
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
        int element = n%10;
        v.push_back(element);

        n /= 10;
    }

    reverse(all(v));
    return v;
}

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    // a == b
    for (int i = 1; i <= n; i++) {
        vector<int> sliced = slice_n(i);
        int d = sliced.size();
        if (sliced[0] == sliced[d-1]) ans++;
    }

    // a != b
    int cnt, dn;
    cnt = 0; dn = slice_n(n).size();
    for (int da = 1; da <= dn-1; da++) {
        for (int db = da; db <= dn-1; db++) {
            int free_a, free_b;
            free_a = da-2; free_b = db-2;
            if (free_a >= 0) {
                if (free_a == free_b) {
                    int f = pow(9, free_a);
                    cnt += f*(f-1)/4;
                } else {
                    cnt += pow(9, free_a) * pow(9, free_b);
                }
            } else if (free_b >= 0) {
                // a は一桁
                cnt += pow(9, free_b);
            } else {
                // a == b の場合に含まれる
                ;
            }
        }
    }
    ans += 2*cnt;

    cout << ans << endl;
    return 0;
}
