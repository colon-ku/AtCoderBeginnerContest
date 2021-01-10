// Link to the Problem
// https://atcoder.jp/contests/abc188/tasks/abc188_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-01-11 00:52:09
    cleared at: 2021-01-11 01:23:07
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
    int size = (1<<n);
    int temp;
    
    int l_max = 0;
    int left;
    for (int i = 0; i < size/2; i++) {
        cin >> temp;
        if (temp > l_max) {
            l_max = temp;
            left = i + 1;
        }
    }

    int r_max = 0;
    int right;
    for (int i = 0; i < size/2; i++) {
        cin >> temp;
        if (temp > r_max) {
            r_max = temp;
            right = i + size/2 + 1;
        }
    }

    auto ans = min(make_pair(l_max, left), make_pair(r_max, right));
    cout << ans.second << endl;

    return 0;
}
