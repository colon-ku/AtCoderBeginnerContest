// Link to the Problem
// https://atcoder.jp/contests/abc190/tasks/abc190_d

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-03-20 15:11:39
    cleared at: 2021-03-20 16:08:10
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

#define ull unsigned long long

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

int main()
{
    long long n;
    cin >> n;

    while (n % 2 == 0) n /= 2;

    long long cnt = 0;
    long long q = rtceil(n);
    for (long long i = 1; i <= q; i++) {
        if (n % i == 0) cnt += 2;        
    }
    if (n == q*q) {
        cnt--;
    }

    cout << 2*cnt << endl;

    return 0;
}
