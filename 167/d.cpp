// Link to the Problem
// https://atcoder.jp/contests/abc167/tasks/abc167_d

/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-10 21:36:22
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

typedef unsigned long ul;

int main()
{
    int n;
    ul k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> enc;
    enc[1]++;
    vector<int> loop(n, -1);
    loop[0] = 1;
    loop[1] = a[0];
    int cur = 1;
    while (enc[loop[cur]] <= 0) {
        enc[loop[cur]]++;
        loop[cur+1] = a[loop[cur]-1];
        cur++;
    }

    int pr;
    for (int i = 0; i < cur; i++) {
        if (loop[i] == loop[cur]) {
            pr = i;
        }
    }
    //pr ~ curでループ構成

    int l = cur - pr;

    int ans;
    if (k > cur) {
        ul res = (k - (ul)pr) % (ul)l;
        ans = loop[pr + (int)res];
    } else {
        ans = loop[k];
    }
    cout << ans << endl;

    return 0;
}
