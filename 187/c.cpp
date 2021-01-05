// Link to the Problem
// https://atcoder.jp/contests/abc187/tasks/abc187_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-01-05 21:27:04
    cleared at: 2021-01-05 21:38:33
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    cin >> n;
    map<string, pair<int, int>> mp;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;

        if (temp[0] == '!') {
            mp[temp.substr(1)].second++;
        } else {
            mp[temp].first++;
        }
    }

    for (auto x : mp) {
        if (x.second.first >= 1 && x.second.second >= 1) {
            cout << x.first << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;

    return 0;
}
