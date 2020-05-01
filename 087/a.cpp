#include <iostream>

using namespace std;

int x, a, b;

void solve()
{
    cout << (x-a)%b << endl;
}

int main()
{
    cin >> x >> a >> b;

    solve();

    return 0;
}