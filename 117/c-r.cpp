/*
    飲んだ魔剤で家が建つ。
    created at: 2020-11-26 18:41:08
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(m);
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        x[i] = temp;
    }

    if (n >= m) {
        cout << 0 << endl;
    }
    else {
        sort(all(x));

        vector<int> gap(m-1);
        for (int i = 0; i < m-1; i++) {
            gap[i] = x[i+1] - x[i];
        }

        sort(all(gap));

        int ans = 0;
        for (int i = 0; i < m-n; i++) {
            ans += gap[i];
        }

        cout << ans << endl;
    }

    return 0;
}