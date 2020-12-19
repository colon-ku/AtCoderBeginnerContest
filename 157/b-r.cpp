// Link to the Problem
/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-03-05 00:45:46
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
    int a[4][4] = {0};
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> a[i][j];
    
    int n;
    cin >> n;
    int b[n] = {0}; 
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int k = 0; k < n; k++)
        for (int i = 1; i <= 3; i++)
            for (int j = 1; j <= 3; j++)
                if (a[i][j] == b[k]) a[i][j] = 0;
    
    int bingo;
    if (a[1][1] + a[2][1] + a[3][1] == 0 ||
        a[1][2] + a[2][2] + a[3][2] == 0 ||
        a[1][3] + a[2][3] + a[3][3] == 0 ||
        a[1][1] + a[1][2] + a[1][3] == 0 ||
        a[2][1] + a[2][2] + a[2][3] == 0 ||
        a[3][1] + a[3][2] + a[3][3] == 0 ||
        a[1][1] + a[2][2] + a[3][3] == 0 ||
        a[1][3] + a[2][2] + a[3][1] == 0)
    {
        bingo = 1;
    } else {
        bingo = 0;
    }

    if (bingo) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
