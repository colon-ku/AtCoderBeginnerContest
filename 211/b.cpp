// Link to the Problem
// https://atcoder.jp/contests/abc211/tasks/abc211_b

/*
    飲んだ魔剤で家が建つ。
    created at: 2021-08-11 20:08:05
    cleared at: 
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF 1000000000

long long rtceil (long long x) {
    long long i;
    for (i = 1; x > 0; i++) {
        x -= i*2 + 1;
    }

    return i - 1;
}

int main()
{
    vector<string> s(4);
    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }

    map<string, int> cnt;

    for (int i = 0; i < 4; i++) {
        cnt[s[i]]++;
    }

    if (cnt["H"] * cnt["2B"] * cnt["3B"] * cnt["HR"] == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
