# https://atcoder.jp/contests/abc083/tasks/abc083_a
#include <cstdio>

int a, b, c, d;

int main()
{
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a + b > c + d) {
        printf("Left\n");
    } else if (a + b == c + d) {
        printf("Balanced\n");
    } else {
        printf("Right\n");
    }

    return 0;
};