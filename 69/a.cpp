#include <cstdio>

using namespace std;

int n, m;

void solve()
{
    int ans = (n-1)*(m-1);
    printf("%d\n", ans);
}

int main()
{
    scanf("%d%d", &n, &m);
    solve();
    return 0;
}