// Link to the Problem
/*
  ∧,,∧
( 'ω' )つ ＜またお前か！！　
（m9 ＼ 　　
　 ＼　 ＼
　 　 ) ) ＼
　 ／／ ＼ ＼
　 (＿） 　 (＿)
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

int main()
{
    int a[4] = {2, 10, 8, 40};
    int g = a[0];

    int temp;
    for (int i = 0; i < 4; i++) {
        temp = g;
        g = __gcd(g, a[i]);
    }

    cout << g << endl;

    return 0;
}
