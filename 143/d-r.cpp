/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-13 16:12:41
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

int search(vector<int> v, int key)
{
    // key より大きい要素の中で一番小さいものを選ぶ
    int n, left, right, mid;
    n = v.size(); left = 0; right = n;

    while (left < right) {
        mid = (left + right) / 2;
        if (v[mid] == key) {
            return mid + 1;
        } else if (v[mid] > key) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int N;
    cin >> N;
    vector<int> L(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }

    sort(all(L));
    
    int ans = 0;
    for (int i = N-1; i >= 2; i--) {
        for (int j = i-1; j >= 1; j--) {
            int index = search(L, L[i] - L[j]);
            if (index > 0 && index < j) {
                ans += (j - index);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
