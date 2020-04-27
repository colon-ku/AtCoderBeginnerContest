#include <iostream>
using namespace std;

int main()
{
    unsigned long power = 1;
    while ((power+1) % 673) {
        power *= 10;
    }

    cout << power << endl;

    return 0;
}