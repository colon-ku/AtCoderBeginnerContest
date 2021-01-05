// Link to the Problem
// https://atcoder.jp/contests/abc187/tasks/abc187_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-01-05 21:12:34
    cleared at: 2021-01-05 21:26:57
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
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    sort(all(p));

    int cnt = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (p[j].second-p[i].second <= p[j].first-p[i].first && 
                p[j].second-p[i].second >= p[i].first-p[j].first) {
                    cnt++;
                }
        }
    }

    cout << cnt << endl;

    return 0;
}
