// Link to the Problem
// https://atcoder.jp/contests/abc124/tasks/abc124_c
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char flag = '0';
    char color = '0';
    int temp = 0;

    for (int i = 0; i < s.length(); i++) {
        color = (char)s[i];

        if (flag == color) temp += 1;

        if (flag == '1') flag = '0';
        else flag = '1';
    }

    int alt = s.length() - temp;
    cout << min(temp, alt) << endl;

    return 0;
}
