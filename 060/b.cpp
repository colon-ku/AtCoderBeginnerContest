/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-26 17:08:43
    cleared at: 
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

    set<int> u;
    int lst = a % b;
    for (int i = 0; i < b; i++) {
        u.insert(lst);
        lst = (lst + a) % b;
    }

    auto it = u.find(c);
    if (it != u.end()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
