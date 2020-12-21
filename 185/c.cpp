// Link to the Problem
// https://atcoder.jp/contests/abc185/tasks/abc185_c

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-13 21:18:30
    cleared at: 2020-12-13 22:15:59
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int L;
map<pair<int, int>, bool> v;
map<pair<int, int>, long> memo;

long cnt (int cur, int num)
{
    pair<int, int> s = make_pair(cur, num);
    pair<int, int> a = make_pair(cur+1, num);
    pair<int, int> b = make_pair(cur+1, num+1);
    
    if (v[s]) {
        return memo[s];
    }

    if (cur <= num) {
        memo[s] = 0l;
    } else if (num == 11) {
        memo[s] = 1l;
    } else if (cur == L) {
        memo[s] = 0l;
    } else {
        if (!v[a]) memo[a] = cnt(a.first, a.second);
        if (!v[b]) memo[b] = cnt(b.first, b.second);

        memo[s] = memo[a] + memo[b];
    }

    // cout << s.first << " " << s.second << " " << memo[s] << endl;

    v[s] = true;
    return memo[s];
}

int main()
{
    cin >> L;

    long ans = cnt(1, 0);
    
    cout << ans << endl;

    return 0;
}
