// Link to the Problem
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> store(n);
    for (int i = 0; i < n; i++)
        cin >> store[i].first >> store[i].second;

    sort(all(store));

    LL ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int value = store[i].first;
        int remain = store[i].second;

        if (remain <= m - cnt) {
            ans += (LL)value*remain;
            cnt += remain;
        } else {
            ans += (LL)value*(m - cnt);
            cnt = m;
        }
    }

    cout << ans << endl;
    return 0;
}