/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-07 12:14:07
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    vector<int> c(4, 0);
    for (int i = 0; i < n; i++) {
        string t = s[i];
        if (t == "AC") c[0]++;
        if (t == "WA") c[1]++;
        if (t == "TLE") c[2]++;
        if (t == "RE") c[3]++;
    }

    cout << "AC x " << c[0] << endl;
    cout << "WA x " << c[1] << endl;
    cout << "TLE x " << c[2] << endl;
    cout << "RE x " << c[3] << endl;

    return 0;
}
