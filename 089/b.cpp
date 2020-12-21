// Link to the Problem
// https://atcoder.jp/contests/abc089/tasks/abc089_b

#include <iostream>

using namespace std;

#define MAX_N 100

int n;
char s[MAX_N];

void solve()
{
    string ans = "Three";
    for (int i = 0; i < n; i++) {
        if (s[i] == 'Y') ans = "Four";
    }

    cout << ans << endl;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    solve();

    return 0;
}