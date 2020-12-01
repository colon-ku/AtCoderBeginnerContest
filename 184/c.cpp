/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-01 11:16:57
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define INF 1000000000

int p[2], q[2];

bool con0(int a, int b, int c, int d)
{
    if (a == c && b == d)
        return true;
    else
        return false;
}

bool con1(int a, int b, int c, int d)
{
    if (a + b == c + d ||
        a - b == c - d ||
        abs(a - c) + abs(b - d) <= 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool con2(int a, int b, int c, int d)
{
    if ((a + b) % 2 == (c + d) % 2 ||
        abs(a - c) + abs(b - d) <= 6 ||
        abs((a + b) - (c + d)) <= 3 ||
        abs((a - b) - (c - d)) <= 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cin >> p[0] >> p[1] >> q[0] >> q[1];

    int ans;

    if (con0(p[0], p[1], q[0], q[1]))
        ans = 0;
    else if (con1(p[0], p[1], q[0], q[1]))
        ans = 1;
    else if (con2(p[0], p[1], q[0], q[1]))
        ans = 2;
    else
        ans = 3;

    cout << ans << endl;
    return 0;
}
