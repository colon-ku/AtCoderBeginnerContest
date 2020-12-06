/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-06 19:29:16
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
    set<int> l;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        l.insert(temp);
    }

    int c = 0;
    for (auto x : l) {
        c++;
    }
    cout << c << endl;

    map<vector<int>, int> cnt;

    int ans = 0;
    for (auto itr = cnt.begin(); itr != cnt.end(); itr++) {
        ans++;
    }

    cout << ans << endl;

    return 0;
}
