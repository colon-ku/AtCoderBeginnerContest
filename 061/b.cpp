/*
    飲んだ魔剤で家が建つ。
    created at: 2020-05-10 20:47:22
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    for (int i = 0; i < m; i++)
        cin >> a[i] >> b[i];

    vector<int> con(n, 0);
    for (int i = 0; i < m; i++) {
        con[a[i]-1]++;
        con[b[i]-1]++;
    }

    for (int i = 0; i < n; i++)
        cout << con[i] << endl;

    return 0;
}
