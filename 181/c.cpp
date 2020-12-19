// Link to the Problem
// https://atcoder.jp/contests/abc181/tasks/abc181_c
/*
    飲んだ魔剤で家が建つ。
    created at: 2020-12-02 22:23:53
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> coor(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        coor[i].first = x;
        coor[i].second = y;
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (coor[i].first == coor[j].first) {
                    if (coor[i].first == coor[k].first) ans++;
                } else {
                    double y = (double)(coor[j].second-coor[i].second)*(coor[k].first-coor[i].first)/(coor[j].first-coor[i].first) + coor[i].second;
                    
                    if (y == coor[k].second) ans++;
                }
            }
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
