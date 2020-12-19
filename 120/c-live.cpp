// Link to the Problem
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

int main()
{
    string S;
    cin >> S;

    vector<int> cnt(2, 0);

    for (int i = 0; i < S.size(); i++) {
        cnt[S[i] - '0']++;
    }

    int ans = min(cnt[0], cnt[1]) * 2;

    cout << ans << endl;
    return 0;
}
