// Link to the Problem
#include <iostream>
using namespace std;

int main()
{
    int table[3][3] = {-1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}