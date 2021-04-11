// Link to the Problem
// https://atcoder.jp/contests/abc194/tasks/abc194_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-04-08 21:10:47
    cleared at: 2021-04-08 21:30:26
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> b[i].first;
        a[i].second = b[i].second = i;
    }

    int a_1, a_2;
    a_1 = a_2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        int sum = a[i].first + b[i].first;
        if (a_1 > sum) a_1 = sum;
    }

    sort(all(a));
    sort(all(b));

    // for (int i = 0; i < n; i++) {
    //     printf("(%d, %d) (%d, %d)\n", a[i].first, a[i].second, b[i].first, b[i].second);
    // }

    if (a[0].second == b[0].second) {
        int time = min( max(a[0].first, b[1].first), max(a[1].first, b[0].first) );
        if (a_2 > time) a_2 = time;
    } else {
        a_2 = max(a[0].first, b[0].first);
    }

    cout << min(a_1, a_2) << endl;

    return 0;
}
