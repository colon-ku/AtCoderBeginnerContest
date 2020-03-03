#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {3, 1, 4, 1, 5, 9, 2};

    vector<int>::iterator p = find(v.begin(), v.end(), 2);
    if (p == v.end()) {
        cout << "2: not found" << endl;
    } else {
        cout << "v[" << static_cast<int>(p - v.begin()) << "] = 2" << endl;
    }

    p = find(v.begin(), v.end(), 8);
    if (p == v.end()) {
        cout << "8: not found" << endl;
    } else {
        cout << "v[" << static_cast<int>(p - v.begin()) << "] = 8" << endl;
    }

    p = find_if(v.begin(), v.end(), [](int a){ return a%2==0; });
    if (p == v.end()) {
        cout << "even: not found" << endl;
    } else {
        cout << "v[" << static_cast<int>(p - v.begin()) << "] = " << *p << endl;
    }

    return 0;
}
