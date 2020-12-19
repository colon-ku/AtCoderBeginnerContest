// Link to the Problem
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-03 21:57:42
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
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(all(a));

    int ans = 0;
    int prev = 0;
    for (int i = 1; i < n; i++) {
        for (int j = prev; j < prev; j++) {
            if (a[i].first - a[j].first == a[i].second + a[j].second) {
                ans++;
            }
        }

        if (a[i].first - a[prev].first > n-1) prev++;
    }

    cout << ans << endl;

    return 0;
}
