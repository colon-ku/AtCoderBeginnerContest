# https://atcoder.jp/contests/abc158/tasks/abc158_d
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-07 21:13:08
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
    string s;
    cin >> s;
    int q;
    cin >> q;
    vector<pair<int, pair<int, char>>> query(q);
    for (int i = 0; i < q; i++) {
        int t, f;
        char c;

        cin >> t;
        if (t == 1) {
            query[i].first = 1;
        } else {
            cin >> f >> c;
            query[i].second.first = f;
            query[i].second.second = c;
        }
    }

    int rev = 0;
    string lead, end;
    lead = end = "";
    for (int i = 0; i < q; i++) {
        if (query[i].first == 1) {
            if (rev) rev = 0;
            else rev = 1;
        } else {
            int f = query[i].second.first;
            char c = query[i].second.second;

            if (rev) {
                // f = 1なら末尾、f = 2なら先頭
                if (f == 1) {
                    end += c;
                } else {
                    lead.insert(lead.begin(), c);
                }
            } else {
                // f = 1なら先頭、f = 2なら末尾
                if (f == 1) {
                    lead.insert(lead.begin(), c);
                } else {
                    end += c;
                }
            }
        }
    }

    string ans = "";
    if (rev) {
        reverse(all(s));
        reverse(all(lead));
        reverse(all(end));
        ans += end;
        ans += s;
        ans += lead;
    } else {
        ans += lead;
        ans += s;
        ans += end;
    }

    cout << ans << endl;

    return 0;
}
