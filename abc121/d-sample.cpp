#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define SP <<" "<<
#define MOD 1000000007
#define IINF 1000000000
#define LINF 1000000000000000000

typedef long long LL;
typedef long double LD;

int main()
{
    LL a, b;
    cin >> a >> b;
    int count[60] = {0};
    for (int i = 59; i >= 0; i--) {
        if (b & (1ll << i)) count[i] += (b & ((1ll << i) - 1)) + 1;
    }
    if (b & 2) count[0]++;

    for (int i = 59; i >= 0; i--) {
        if ((a-1)&(1ll<<i)) count[i] += ((a-1)&((1ll<<i)-1))+1;
    }

    if ((a-1)&2) count[0]++;

    LL ans=0;
    for(int i = 59; i >= 0; i--) {
        if (count[i]%2) ans+=(1ll<<i);
    }
    cout << ans << endl;
    return 0;
}
