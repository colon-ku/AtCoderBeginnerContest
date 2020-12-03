/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-03 17:35:53
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    cin >> n;
    int diff[n];
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        diff[i] = max(x-y, y-x);
    }

    string ans = "No";
    for (int i = 0; i < n-2; i++) {
        int sum = diff[i] + diff[i+1] + diff[i+2];
        if (sum == 0) ans = "Yes";
    }

    cout << ans << endl;
    return 0;
}
