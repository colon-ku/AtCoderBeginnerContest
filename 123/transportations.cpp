#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, a, b, c, d, e;
    cin >> n >> a >> b >> c >> d >> e;
    long cap = a;

    if (cap > b) cap = b;
    if (cap > c) cap = c;
    if (cap > d) cap = d;
    if (cap > e) cap = e;

    cout << (long)((n + cap - 1)/cap + 4) << endl;
}
