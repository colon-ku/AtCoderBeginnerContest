#include <iostream>
#include <algorithm> //for next_permutation
#include <vector> //for vector
#include <numeric> //for iota
using namespace std;

int main()
{
    int n = 3;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    do {
        for (auto x : v) cout << x << " ";
        cout << "\n";
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}