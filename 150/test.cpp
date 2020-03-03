#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> p(3), q(3);
    for (int i = 0; i < 3; i++) {
        p[i] = i;
    }
    for (int i = 0; i < 3; i++) {
        q[i] = i;   
    }

    if (p == q) cout << "Yes" << endl;
    else cout << "No" << endl;

    for (int i = 0; i < 3; i++) {
        q[i] = i - 1;   
    }

    if (p == q) cout << "Yes" << endl;
    else cout << "No" << endl;

    p = q;
    if (p == q) cout << "Yes" << endl;
    else cout << "No" << endl;


    for (int i = 0; i < 3; i++)
        q[i]++;

    if (p == q) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}   