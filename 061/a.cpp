/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-10 20:45:53
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (c >= a && c <= b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
