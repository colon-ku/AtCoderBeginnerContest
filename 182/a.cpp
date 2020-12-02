/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-02 19:52:14
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
    int a, b;
    cin >> a >> b;

    cout << max(0, 2*a + 100 - b) << endl;

    return 0;
}
