#include <bits/stdc++.h>
using namespace std;

string binary(int x, int y)
{
    string bin = "";

    while (x > 0) {
        char res = (x % 2) + '0';
        bin = res + bin;
        x /= 2;
    }

    y = y - bin.length();
    for (int i = 0; i < y; i++)
        bin = '0' + bin;

    return bin;
}

int main() {
    string bin = binary(10, 5);
    cout << bin << endl;

    for (int i = 0; i < bin.length(); i++) {
        if (bin[i] - '0' > 0) cout << "Yes" << endl;
    }
    
    return 0;
}