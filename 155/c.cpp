# https://atcoder.jp/contests/abc155/tasks/abc155_c
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-01 20:45:15
                2020-03-03 18:40:00
                2020-03-07 18:35:10
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

    vector<pair<int, string>> cnt;
    for (int i = 0; i < n; i++) {
        int con = 1;
        int make_it_count = 1;
        for (int j = 0; con && j < cnt.size(); j++) {
            if (s[i] == cnt[j].second) {
                make_it_count = 0;
                cnt[j].first++;
                con = 0;
            }
        }

        if (make_it_count) {
            cnt.push_back(make_pair(1, s[i]));
        }
    }

    sort(all(cnt));
    reverse(all(cnt));

    int m = cnt[0].first;
    vector<string> ans;
    for (int i = 0; i < cnt.size(); i++) {
        if (m == cnt[i].first) {
            ans.push_back(cnt[i].second);
        }
    }

    sort(all(ans));
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
