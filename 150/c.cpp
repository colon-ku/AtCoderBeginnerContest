/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-10 21:07:12
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
    vector<int> p(n), q(n), r(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        cin >> q[i];

    int k, isLarge;
    for (int i = 0; i < n; i++) {
        if (p[i] < q[i]) {
            k = i - 1;
            isLarge = 0;
            break;
        } else if (p[i] > q[i]) {
            k = i - 1;
            isLarge = 1;
            break;
        }
    }

    if (isLarge) {
        vector<int> swap(n);
        swap = p;
        p = q;
        q = swap;
    }

    r = p;

    int ans = -1;
    for (int i = 0; ans < 0; i++) {
        if (r == q) ans = i;

        int cng = -1;
        for (int j = n-1; j >= 1; j++) {
            if (r[j-1] < r[j]) cng = j-1;
        }

        vector<int> cp(n-cng);
        int value = r[cng];
        for (int j = 0; j < n - cng; j++) {
            cp[j] = r[j+cng];
        }
        sort(all(cp));

        for (int j = 0; j < n - cng; j++) {
            if (cp[j] > value) {
                int sw = cp[0];
                cp[0] = cp[j];
                cp[j] = sw;
                break;
            }
        }

        for (int j = cng; j < n; j++) {
            r[j] = cp[j];
        }

        cout << i << endl;
    }

    cout << ans << endl;
    return 0;
} 
