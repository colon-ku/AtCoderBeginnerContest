// Link to the Problem
// https://atcoder.jp/contests/abc075/tasks/abc075_a

#include <cstdio>

int a, b, c;
int cnt[201];

void solve()
{
    cnt[a+100]++;
    cnt[b+100]++;
    cnt[c+100]++;

    for (int i = 0; i < 201; i++) {
        if (cnt[i] == 1) {
            printf("%d\n", i-100);
        }
    }
}

int main()
{
    scanf("%d%d%d", &a, &b, &c);

    solve();

    return 0;
}