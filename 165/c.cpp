// Link to the Problem
// https://atcoder.jp/contests/abc165/tasks/abc165_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-02 21:21:40
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int n;
vector<vector<int>> temp;
vector<vector<int>> comb;

void set_comb(int k) {
    vector<int> x;
    for (int i = 0; i < temp.size(); i++) {
        x = temp[i];
        x.push_back(k);
        if (x.size() == n) {
            comb.push_back(x);
        } else {
            temp.push_back(x);
        }
    }
}

int main()
{
    int m, q;
    cin >> n >> m >> q;
    vector<int> a(q), b(q), c(q), d(q);
    for (int i = 0; i < q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    temp.push_back({});
    for (int k = 1; k <= m; k++) {
        set_comb(k);
    }

    int ans = 0;
    for (int i = 0; i < comb.size(); i++) {
        int sum = 0;
        for (int j = 0; j < q; j++) {
            int x = comb[i][b[j]-1] - comb[i][a[j]-1];
            if (x == c[j]) {
                sum += d[j];
            }
        }

        if (sum > ans) {
            ans = sum;
        }
    }

    cout << ans << endl;

    return 0;
}
