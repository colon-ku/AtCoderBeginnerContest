// Link to the Problem
// https://atcoder.jp/contests/abc131/tasks/abc131_c

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-15 23:20:53
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007

typedef long long LL;
typedef long double LD;

bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main()
{
    long A, B, C, D;
    cin >> A >> B >> C >> D;

    long ans = B - A + 1;
    // Cで割り切れる
    ans -= B/C;
    ans += (A-1)/C;

    // Dで割り切れる
    ans -= B/D;
    ans += (A-1)/D;

    // C でも D でも割り切れる
    long l = (C*D)/(__gcd(C, D));
    ans += B/l;
    ans -= (A-1)/l;

    cout << ans << endl;
    return 0;
}
