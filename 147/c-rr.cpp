#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), x(N), y(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        for (int j = 0; j < A[i]; j++) {
            int a, b;
            cin >> a >> b;

            int z = 1<<(a-1);
            x[i] += z;
            if (b) y[i] += z;
        }
    }

    int ans = 0;
    for (int bit = 0; bit < (1<<N); bit++) {
        int hon = 0;
        int ok = 1;
        for (int i = 0; i < N; i++) {
            if (bit & (1<<i)) {
                hon++;
                for (int p = 0; p < N; p++) {
                    if (y[i] & (1<<p) != bit & (1<<p)) {
                        ok = 0;
                    }
                }
            }
        }
        if (ok && hon > ans) ans = hon;
    }

    cout << ans << endl;
    return 0;
}