/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-02 19:13:25
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    double s_x, s_y, g_x, g_y;
    cin >> s_x >> s_y >> g_x >> g_y;

    double ans = (s_x*g_y + g_x*s_y) / (s_y + g_y);
    printf("%.6f\n", ans);

    return 0;
}
