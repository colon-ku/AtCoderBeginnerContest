// Link to the Problem
// https://atcoder.jp/contests/abc011/tasks/abc011_2

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-03-09 12:27:06
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

    char aa = 'a' - 'A';

    if (s[0] >= 'a') {
        char rep = s[0] - aa;
        s[0] = rep;
    }

    for (int i = 1; i < s.length(); i++) {
        if (s[i] < 'a') {
            char rep = s[i] + aa;
            s[i] = rep;
        }
    }

    cout << s << endl;
    return 0;
}
