// Link to the Problem
// https://atcoder.jp/contests/abc095/tasks/abc095_b
#include <iostream>

using namespace std;

#define INF 100000

int n, x, m[INF], ans;

void solve()
{
    ans = 0;

    int mini = INF;
    for (int i = 0; i < n; i++) {
        int temp = m[i];
        x -= temp;
        if (temp < mini) mini = temp;
    }
    ans += n;

    ans += x/mini;
}

int main()
{
    scanf("%d%d", &n, &x);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        m[i] = temp;
    }

    solve();

    cout << ans << endl;

    return 0;
}