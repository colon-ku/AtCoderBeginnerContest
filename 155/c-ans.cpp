#include <bits/stdc++.h>
using namespace std;

map<string, int> memo;

int main(void)
{
    int n;

    scanf("%lld", &n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        memo[s] += 1;
    }

    int maxv = 0;
    for (const suto& x : memo) {
        int v = x.second;
        if (v > maxv) maxv = v;
    }

    for (auto it = memo.begin(); it != memo.end(); it++) {
        if (it->second == maxv) {
            cout << it->first << endl;
        }
    }

    return 0;
}