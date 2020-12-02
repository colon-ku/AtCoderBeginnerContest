/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-02 19:54:59
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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m = 0;
    for (int i = 0; i < n; i++)
        if (m < a[i]) m = a[i];

    pair<int, int> p = make_pair(0, 0);
    for (int k = 2; k <= m; k++) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] >= k && a[i] % k == 0) {
                sum++;
            }
        }

        if (p.first < sum) {
            p.first = sum;
            p.second = k;
        }
    }

    cout << p.second << endl;

    return 0;
}
