/*
  ∧,,∧
( 'ω' )つ ＜WA,またお前か！！　
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

bool compare_by_a(pair<int, int> a, pair<int, int> b) {
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second < a.second;
    }
}

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int func(int n) {
    if (n % 2 == 0) return n/2;
    else return 3*n + 1;
}

int main()
{
    int s;
    cin >> s;
    int temp;
    vector<int> a(1, s);

    for (int m = 1; m <= 100000; m++) {
        temp = func(a[m-1]);
        a.push_back(temp);
        for (int i = 0; i < m; i++) {
            if (a[i] == temp) {
                cout << m+1 << endl;
                return 0;
            }
        }
    }
}
