// Link to the Problem
// https://atcoder.jp/contests/abc095/tasks/abc095_d
#include <iostream>
#include <vector>

using namespace std;

typedef long long LL;

int main()
{
    int n;
    LL c;
    cin >> n >> c;
    vector<LL> x(n+1, 0), v(n+1, 0);
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> v[i];

    //t: 1, 1+2, 1+2+3, ...
    //u: n, n+(n-1), ...
    vector<LL> t(n+1, 0), u(n+1, 0);
    for (int i = 1; i <= n; i++) {
        t[i] = t[i-1] + v[i];
        u[i] = u[i-1] + v[n-i+1];
    }

    LL ans = 0;
    for (int a = 0; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            LL p, q;
            p = q = t[a] + u[n-b+1];

            p -= 2*x[a] + x[b];
            q -= x[a] + 2*x[b];

            p = max(p, q);
            ans = max(ans, p);
        }
    }

    cout << ans << endl;

    return 0;
}