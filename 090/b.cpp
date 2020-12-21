// Link to the Problem
// https://atcoder.jp/contests/abc090/tasks/abc090_b

#include <iostream>

using namespace std;

int a, b;
int deci[5];

bool per(int n)
{
    for (int i = 0; i < 5; i++) {
        deci[4-i] = n%10;
        n /= 10;
    }

    if (deci[0] == deci[4] && deci[1] == deci[3]) return true;
    else return false;
}

void solve()
{
    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (per(i)) ans++;
    }

    cout << ans << endl;
}

int main()
{
    cin >> a >> b;

    solve();

    return 0;
}