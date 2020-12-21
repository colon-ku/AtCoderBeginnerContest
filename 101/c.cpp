// Link to the Problem
// https://atcoder.jp/contests/abc101/tasks/abc101_c

#include <iostream>
#include <cmath>

using namespace std;

#define MAX_N 100000

int n, k, a[MAX_N];
int ans;

void solve()
{
    ans = ceil((float)(n-1)/(k-1));
}

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        a[i] = temp;
    }

    solve();

    cout << ans << endl;

    return 0;
}