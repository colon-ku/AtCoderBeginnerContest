// Link to the Problem
// https://atcoder.jp/contests/abc193/tasks/abc193_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-24 20:46:49
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), p(n), x(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> p[i] >> x[i];
    }

    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (a[i] < x[i]) ans.push_back(p[i]);
    }

    if (ans.size() > 0) {
        sort(all(ans));
        cout << ans[0] << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
