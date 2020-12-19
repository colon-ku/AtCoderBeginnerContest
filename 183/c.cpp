# https://atcoder.jp/contests/abc183/tasks/abc183_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-02 19:33:43
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
    int n, k;
    cin >> n >> k;
    int t[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> t[i][j];

    int ans = 0;
    int ord[n];
    for (int i = 0; i < n; i++)
        ord[i] = i;

    do {
        int sum = t[ord[n-1]][ord[0]];

        for (int i = 0; i < n-1; i++) {
            sum += t[ord[i]][ord[i+1]];
        }

        if (sum == k) ans++;

    } while (next_permutation(ord+1, ord+n));

    cout << ans << endl;

    return 0;
}
