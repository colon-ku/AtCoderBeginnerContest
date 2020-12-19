// Link to the Problem
// https://atcoder.jp/contests/abc166/tasks/abc166_b
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-03 21:00:58
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> t(n, 1);
    for (int i = 0; i < k; i++) {
        int d;
        cin >> d;
        for (int j = 0; j < d; j++) {
            int a;
            cin >> a;
            t[a-1] = 0;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += t[i];
    }

    cout << ans << endl;

    return 0;
}
