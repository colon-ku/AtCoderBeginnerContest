// Link to the Problem
// https://atcoder.jp/contests/abc084/tasks/abc084_b
#include <iostream>
#include <string>

using namespace std;

int a, b;
string s;

void solve()
{
    int ok = 1;
    for (int i = 0; i < a+b+1; i++) {
        if (i == a && s[i] != '-' || i != a && s[i] == '-') {
            ok = 0;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main()
{
    cin >> a >> b >> s;

    solve();

    return 0;
}