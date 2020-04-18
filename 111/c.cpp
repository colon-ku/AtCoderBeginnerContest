/*
    飲んだ魔剤で家が建つ。
    created at: 2020-04-18 19:54:49
*/

#include <bits/stdc++.h>
using namespace std;

#define all(v) (v).begin(),(v).end()

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<pair<int, int>> l(100001), r(100001);
    for (int i = 0; i < 100001; i++)
        l[i] = r[i] = make_pair(0, i);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) l[v[i]].first++;
        else r[v[i]].first++;
    }

    sort(all(l)); sort(all(r));

    int ans;
    if (l[100000].second != r[100000].second) {
        ans = ((n+1)/2-l[100000].first)+(n/2-r[100000].first);
    } else {
        int a = ((n+1)/2-l[99999].first)+(n/2-r[100000].first);
        int b = ((n+1)/2-l[100000].first)+(n/2-r[99999].first);
        ans = min(a, b);
    }

    cout << ans << endl;

    return 0;
}
