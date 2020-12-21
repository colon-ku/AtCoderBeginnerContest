#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 3;

    // {0, 1, ..., n-1}の部分集合の全探索
    // 1<<n は 1 を n 回左にシフトした数を指す(つまり 2^n )
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) { // i が bit に入るかどうか
                S.push_back(i);
            }
        }

        cout << bit << ": {";
        for (int i = 0; i < (int)S.size(); i++) {
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}