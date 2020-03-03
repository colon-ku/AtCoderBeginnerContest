#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s; cin >> s;
    int max_len = 0;
    int len = 0;
    char temp;

    for (int i = 0; i < (int)(s.length()); i++) {
        temp = (char)s[i];
        len += 1;

        if (!(temp == 'A' || temp == 'C' || temp == 'G' || temp == 'T')) len = 0;

        if (max_len < len) max_len = len;
    }

    cout << max_len << endl;
    return 0;
}
