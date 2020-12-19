// Link to the Problem
/*
  ∧,,∧
( 'ω' )つ ＜またお前か！！　
（m9 ＼ 　　
　 ＼　 ＼
　 　 ) ) ＼
　 ／／ ＼ ＼
　 (＿） 　 (＿)
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()

typedef long long LL;
typedef long double LD;

class UnionFind {
public:
    //親の番号を格納する。親だった場合は-(その集合のサイズ)
    vector<int> Parent;

    //作るときはParentの値をすべて-1にする
    UnionFind(int N) {
        Parent = vector<int>(N, -1);
    }

    //Aがどのグループに属しているか調べる
    int root(int A) {
        if (Parent[A] < 0) return A;
        return Parent[A] = root(Parent[A]);
    }

    //自分のいるグループの頂点数を調べる
    int size(int A) {
        return -Parent[root(A)]; //親をとってきたい
    }

    //AとBをくっつける
    bool connect(int A, int B) {
        //AとBを直接つなぐのではなく、root(A)にroot(B)をくっつける
        A = root(A);
        B = root(B);
        if (A == B) {
            //すでにくっついてるからくっつけない
            return false;
        }

        //大きい方(A)に小さい方(B)をくっつけたい
        //大小が逆だったらひっくり返す。
        if (size(A) < size(B)) swap(A, B);

        //Aのサイズを更新する
        Parent[A] += Parent[B];
        //Bの親をAに変更する
        Parent[B] = A;

        return true;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }

    vector<LL> ans(M);
    ans[M-1] = (LL)N * (N - 1) / 2;

    UnionFind Uni(N);

    for (int i = M-1; i >= 0; i--) {
        ans[i-1] = ans[i];

        //繋がってなかったのが繋がったとき
        if (Uni.root(A[i]) != Uni.root(B[i])) {
            ans[i-1] -= (LL)Uni.size(A[i]) * Uni.size(B[i]);
            Uni.connect(A[i], B[i]);
        }
    }

    for (int i = 0; i < M; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
