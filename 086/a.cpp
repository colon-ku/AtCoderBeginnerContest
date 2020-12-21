// Link to the Problem
// https://atcoder.jp/contests/abc086/tasks/abc086_a

#include <iostream>

int a, b;

int main()
{
    std::cin >> a >> b;
    if (a % 2 && b % 2) {
        std::cout << "Odd" << std::endl;
    } else {
        std::cout << "Even" << std::endl;
    }

    return 0;
}