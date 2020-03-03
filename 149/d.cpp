/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2019-12-29 22:10:35
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

int win(char me, char you)
{
    if (me == you) {
        return 0;
    } else {
        if (me == 'r') {
            if (you == 's') return 1;
            else return -1;
        } else if (me == 's') {
            if (you == 'r') return -1;
            else return 1;
        } else {
            if (you == 'r') return 1;
            else return -1;
        }
    }
}

int main()
{
    int n, k, r, s, p;
    cin >> n >> k >> r >> s >> p;
    string t;
    cin >> t;
    
    vector<vector<char>> sub(k);
    for (int i = 0; i < n; i++)
        sub[i%k].push_back(t[i]);

    for (int i = 0; i < k; i++) {
        int len = sub[i].size();
        char prev = sub[i][0];
        for (int j = 0; j < len; j++) {
            
        }
    }
}
