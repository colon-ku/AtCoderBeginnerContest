/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-07 12:08:56
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

    n = (1000 - (n%1000 + 1000)%1000)%1000;
    cout << n << endl;

    return 0;
}
