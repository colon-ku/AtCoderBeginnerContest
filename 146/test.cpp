#include <iostream>
#include <vector>
using namespace std;

int getIndex(vector<int> v, int key) {
    int left, right, mid;
    left = 0;
    right = v.size();

    while (left < right) {
        mid = (left + right) / 2;

        if (v[mid] == key) {
            return mid;
        } else if (v[mid] < key) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return -1;
}

int main()
{
    vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19};

    cout << getIndex(prime, 11) << endl;
    cout << getIndex(prime, 15) << endl;

    return 0;
}