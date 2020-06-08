#include <bits/stdc++.h>
#include <string>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

int main()
{
    string s;
    cin >> s;
    char blinker, color = '0';
    int temp, rev = 0;

    for (int i = 0; i < s.length(); i++) {
        color = (char)s[i];

        if (blinker - '0') {
            if (color - '0') temp += 1;
            blinker = '0';
        } else {
            if (color - '1') temp += 1;
            blinker = '1';
        }
    }

    if (2*temp < s.length())
        cout << temp << endl;
    else
        cout << s.length() - temp << endl;

    return 0;
}
