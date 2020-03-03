#include <iostream>
using namespace std;

int main()
{
    int N, M, C, ans, temp;
    cin >> N >> M >> C;
    int A[N][M], B[M];
    for (int i = 0; i < M; i++)
        cin >> B[i];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    ans = 0;
    for (int i = 0; i < N; i++) {
        temp = 0;

        for (int j = 0; j < M; j++) {
            temp += A[i][j] * B[j];
        }

        if (temp + C > 0)
            ans += 1;
    }

    cout << ans << endl;
    return 0;
}
