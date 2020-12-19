// Link to the Problem
// https://atcoder.jp/contests/abc168/tasks/abc168_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-06-07 21:39:38
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int a, b, h, m;
    cin >> a >> b >> h >> m;

    /*
        時針は12時間で一周、分針は1時間で一周する
        つまり時針は1時間で30°、1分で0.5°周る
        分針は1分で6°周る
        与えられた条件では W = 60*H + M 分経過している
        よって時針は P = (W/2)°、分針は Q = 6W°周っている
        ところで余弦定理は以下のような条件を与える定理である
            c^2 = a^2 + b^2 - 2*a*b*cosC
        上式のa, b, CにそれぞれA, B, Q-Pを代入した結果のcが求める長さである
    */

    long double ans, cosine, W, X;
    W = 60.0*h + m;
    X = 3.141592653589793238L*((11.0/2)*W)/180;
    cosine = cosl(X);
    ans = sqrtl(a*a + b*b - cosine*2*a*b);

    printf("%.12Lf\n", ans);

    return 0;
}
