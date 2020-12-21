#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

int main()
{
    int A, B, K;
    cin >> A >> B >> K;

    int cnt = 0;
    for (int i = 100; i >= 1; i--) {
        if (A % i == 0 && B % i == 0) {
            cnt++;
            if (cnt == K) {
                cout << i << endl;
                return 0;
            }
        }
    }
}
