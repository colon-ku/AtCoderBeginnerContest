// Link to the Problem
// https://atcoder.jp/contests/abc088/tasks/abc088_b
#include <iostream>

using namespace std;

#define MAX_N 100

int n;
int a[MAX_N];

void sort()
{
    for (int i = 0; i < n; i++) {
        int max = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] > a[max]) max = j;
        }

        int swap = a[i];
        a[i] = a[max];
        a[max] = swap;
    }
}

void solve()
{
    sort();

    int alice, bob;
    alice = bob = 0;
    for (int i = 0; i < n; i += 2) alice += a[i];
    for (int i = 1; i < n; i += 2) bob += a[i];

    cout << alice - bob << endl;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int b;
        scanf("%d", &b);
        a[i] = b;
    }

    solve();

    return 0;
}