/*
    飲んだ魔剤で家が建つ。
    created at: test
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int q = 10;
vector<int> d(10);

vector<int> sum;

void adding(int k) {
    int t = sum.size();
    for (int i = 0; i < t; i++) {
        sum.push_back(sum[i] + k);
    }
}

int main()
{
    int n, m;
    cin >> n >> m >> q;
    vector<int> a(q), b(q), c(q);
    for (int i = 0; i < q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    sum.push_back(0);
    for (int k = 0; k < 10; k++) {
        adding(d[k]);
    }

    for (int i = 0; i < sum.size(); i++) {
        
    }

    return 0;
}
