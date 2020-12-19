// Link to the Problem
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-26 21:27:02
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
    int h, n;
    cin >> h >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i] >> b[i];

    vector<pair<double, int>> perf(n);
    vector<pair<pair<int, int>, int>> magic_with_key(n);
    // the higher performance, the smaller ratio under MP/damage
    // magic_with_key: (b, a), i
    for (int i = 0; i < n; i++) {
        perf[i].first = (double)a[i]/b[i];
        perf[i].second = i;
    }
    for (int i = 0; i < n; i++) {
        magic_with_key[i].first.first = b[i];
        magic_with_key[i].first.second = a[i];
        magic_with_key[i].second = i;
    }

    sort(all(perf));
    sort(all(magic_with_key));

    // for (int i = 0; i < n; i++) {
    //     pair<pair<int, int>, int> m = magic_with_key[i];
    //     cout << m.first.first << " " << m.first.second << " " << m.second << endl;
    // }
    // cout << endl;

    int max = *max_element(all(a));
    int min = *min_element(all(a));
    int ans = 0;
    while (h > 0) {
        if (h > max) {
            h -= a[perf[n-1].second];
            ans += b[perf[n-1].second];
        } else if (h <= min) {
            
        } else {
            for (int i = 0; i < n; i++) {
                if (h <= magic_with_key[i].first.second) {
                    int j = magic_with_key[i].second;
                    h -= a[j];
                    ans += b[j];
                    break;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
