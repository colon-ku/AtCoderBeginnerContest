#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (b/a > c) cout << c << endl;
    else cout << b/a << endl;

    return 0;
}
