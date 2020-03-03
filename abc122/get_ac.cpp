#include <iostream>
#include <string>
using namespace std;

int main()
{
    //start of input
    int n, q, temp, temp1, temp2;
    string s;
    cin >> n >> q >> s;
    int lr[q][2];

    for (int i = 0; i < q; i++) {
        cin >> temp1 >> temp2;
        lr[i][0] = temp1;
        lr[i][1] = temp2;
    }
    // end of input

    for (int i = 0; i < q; i++) {
        temp = 0;

        for (int k = lr[i][0] - 1; k < lr[i][1] - 1; k++) {
            if ((char)s[k] == 'A' && (char)s[k+1] == 'C') temp += 1;
        }

        cout << temp << endl;
    }
}
