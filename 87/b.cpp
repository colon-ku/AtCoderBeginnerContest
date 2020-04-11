#include <iostream>

using namespace std;

int a, b, c, x;

void solve()
{
    int ans = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if (x == 500*i + 100*j + 50*k) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    cin >> a >> b >> c >> x;

    solve();

    return 0;
}