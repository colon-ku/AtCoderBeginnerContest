#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a > b) swap(a, b);

    int quo, rem;
    rem = -1;
    while (rem) {
        quo = b / a;
        rem = b % a;
        a = quo;
        b = rem;
    }

    return quo;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int g = gcd(a, b);
    cout << g << endl;
    return 0;
}