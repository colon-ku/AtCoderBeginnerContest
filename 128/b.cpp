# https://atcoder.jp/contests/abc128/tasks/abc128_b
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-16 20:54:58
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
    vector<pair<pair<string, int>, int>> book(N);
    for (int i = 0; i < N; i++) {
        cin >> book[i].first.first >> book[i].first.second;
        book[i].first.second *= -1;
        book[i].second = i+1;
    }

    sort(all(book));

    for (int i = 0; i < N; i++) {
        cout << book[i].second << endl;
    }

    return 0;
}
