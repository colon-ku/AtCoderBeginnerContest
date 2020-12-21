// Link to the Problem
// https://atcoder.jp/contests/abc156/tasks/abc156_c

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-02-22 21:06:12
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
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(all(x));

    int temp = 0;
    float avg;
    for (int i = 0; i < n; i++)
        temp += x[i];
    avg = (float)temp/n;
    temp = (int)avg;

    int par;
    if (avg - temp > temp + 1 - avg) {
        // held at temp + 1
        par = temp + 1;
    } else {
        // held at temp
        par = temp;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (x[i] - par) * (x[i] - par);
    }

    cout << ans << endl;
    return 0;
}
