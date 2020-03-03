/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-11 22:27:36
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007

typedef long long LL;
typedef long double LD;

bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

ostringstream oss_global;
string s_global = oss_global.str();

long d(long N) {
    long digit;
    for (digit = 0; N > 0; ) {
        N /= 10;
        digit++;
    }

    return digit;
}

int main()
{
    long A, B, X;
    cin >> A >> B >> X;

    long left, right, mid;
    left = 0;
    right = 1000000000;

    // 10億買えちゃった
    if (A*right + B*d(right) <= X) {
        cout << right << endl;
        return 0;
    }
    
    long ans = -1;
    while (ans < 0) {
        mid = (left + right) / 2;
        long pr = A*mid + B*d(mid);
        long ps = A*(mid+1) + B*d(mid+1);
        
        if (pr <= X) {
            if (ps > X) ans = mid;
            else left = mid + 1;
        } else {
            right = mid;
        }
    }

    cout << ans << endl;
    return 0;
}
