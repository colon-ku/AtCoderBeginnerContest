// Link to the Problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> t;
    t["hello"]++;
    t["bye"]++;

    for (auto x = t.begin(); x != t.end(); x++) {
        cout << x->first << " " << x->second << endl;
    }
}