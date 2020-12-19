// Link to the Problem
#include <iostream>
#include <map>

using namespace std;

typedef unsigned long ul;

map<int, ul> memo;

ul fib(int n)
{
    if (memo[n] > 0) return memo[n];
    else return memo[n] = fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin >> n;

    memo[1] = memo[2] = 1;
    for (int i = 1; i <= n; i++)
        cout << fib(i) << endl;

    return 0;
}