// Link to the Problem
#include <bits/stdc++.h>
using namespace std;

int bsearch(vector<int> vec, int key) {
    // key: 検索対象の値
    int left, right, mid;
    left = 0;
    right = vec.size();

    while (left < right) {
        mid = (left + right) / 2;

        if (vec[mid] == key) {
            return mid;
        } else if (key < vec[mid]) {
            // 半分より下
            right = mid;
        } else if (vec[mid] < key) {
            // 半分より上
            // 必要ないが、わかりやすいように条件を記述してある
            left = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    
    cout << bsearch(v, 5) << endl;
    cout << bsearch(v, 9) << endl;

    return 0;
}