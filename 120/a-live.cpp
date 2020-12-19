// Link to the Problem
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int ans = B / A;
    if (ans > C) {
        ans = C;
    }

    cout << ans << endl;
    return 0;
}
