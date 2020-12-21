// Link to the Problem
// https://atcoder.jp/contests/abc143/tasks/abc143_d

/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-13 15:07:13
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

int main()
{
    int N;
    cin >> N;
    vector<int> L(N);
    for (int i = 0; i < N; i++)
        cin >> L[i];

    sort(L.begin(), L.end());

    int ans = 0;
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = i+2; k < N; k++) {
                if ( (i-j)*(j-k)*(k-i) > 0 ) {
                    if ( L[k] < L[i] + L[j] ) ans++;
                    else break;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
