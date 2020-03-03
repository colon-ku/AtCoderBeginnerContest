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
#define rep(x, y) for (int x = 0; x < y; x++)

typedef long long LL;
typedef long double LD;

bool compare_by_a(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second < b.second;
    }
}

bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

ostringstream oss_global;
string s_global = oss_global.str();

int main()
{
    vector<pair<int, int>> v;
    v.push_back(make_pair(2, 3));
    v.push_back(make_pair(1, 3));
    v.push_back(make_pair(1, 4));
    v.push_back(make_pair(2, 4));
    v.push_back(make_pair(3, 1));

    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
    cout << endl;

    sort(all(v), compare_by_a);
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
    cout << endl;

    sort(all(v), compare_by_b);
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
    cout << endl;

    sort(all(v));
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
    cout << endl;

    return 0;
}
