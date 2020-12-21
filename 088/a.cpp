// Link to the Problem
// https://atcoder.jp/contests/abc088/tasks/abc088_a

#include <iostream>

using namespace std;

int n, a;

void solve()
{
    if (a >= n%500) printf("Yes\n");
    else printf("No\n");
}

int main()
{
    scanf("%d%d", &n, &a);

    solve();

    return 0;
}