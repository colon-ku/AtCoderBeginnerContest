/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-01 20:45:15
                2020-03-03 18:40:00
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
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    if (n == 1) {
        cout << s[0] << endl;
        return 0;
    }

    sort(all(s));

    vector<pair<string, int>> cnt(n, make_pair("", 0));
    for (int i = 0; i <= n-2; i++) {
        
    }

    return 0;
}
