// Link to the Problem
// https://atcoder.jp/contests/abc198/tasks/abc198_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-04-11 21:00:42
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

int main()
{
    int n;
    cin >> n;

    if (n == 0) {
        cout << "Yes" << endl;
        return 0;
    }

    while (n % 10 == 0) {
        n /= 10;
    }

    string s = to_string(n);
    int m = s.length();
    
    int ok = 1;
    for (int i = 0; i < m/2; i++) {
        char a = s[i];
        char b = s[s.length()-i-1];
        
        if (a != b) {
            ok = 0;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
