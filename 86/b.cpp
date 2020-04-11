#include <iostream>
#include <cmath>

using namespace std;

int a, b;

int digits(int n)
{
    if (n <= 9) return 1;
    else return 1 + digits(n/10);
}

void solve()
{
    int c = a*pow(10, digits(b)) + b;

    int ok = 0;
    for (int i = 1; i <= 3*c/2; i++) {
        if (i*i == c) {
            ok = 1;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main()
{
    cin >> a >> b;

    solve();

    return 0;
}