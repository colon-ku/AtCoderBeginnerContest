// Link to the Problem
#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> v, int key)
{
    // key より大きい要素の中で一番小さいものを選ぶ
    int n, left, right, mid;
    n = v.size(); left = 0; right = n;

    while (left < right) {
        mid = (left + right) / 2;
        if (v[mid] == key) {
            return mid + 1;
        } else if (v[mid] > key) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};

    int x;
    while (x > 0) {
        cin >> x;
        cout << search(v, x) << endl;
    }
    return 0;
}