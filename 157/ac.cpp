// Link to the Problem
/*
    Submission: #11777171
*/

#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using ll = long long;
const ll MOD = 1e9+7; int INF=INT_MAX; ll LLINF = 1LL << 60;
const vector<int> d8x = {1, 0, -1, 0, 1, -1, -1, 1}; vector<int> d8y = {0, 1, 0, -1, 1, 1, -1, -1};
const vector<int> d4x = {1, 0, -1, 0}; vector<int> d4y = {0, 1, 0, -1};

//

struct union_find {
    vector<int> par;

    union_find(int n) : par(n,-1) {}

    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x]=root(par[x]);
    }

    bool unite(int x, int y) {
        int rx = root(x); int ry = root(y);
        if (rx == ry) return false;
        if (par[rx]>par[ry]) swap(rx, ry);
        par[rx] += par[ry];
        par[ry] = rx;
        return true;
    }

    bool same(int x, int y) {
        return root(x) == root(y);
    }

    int size(int x){
        return -par[root(x)];
    }
};

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<set<int>> dame(n);
    union_find uf(n);

    for(int i=0; i<m; ++i){
        int a,b;
        cin>>a>>b;
        --a;
        --b;
        dame[a].insert(b);
        dame[b].insert(a);
        uf.unite(a,b);
    }

    for(int i=0; i<k; ++i){        
        int c,d;
        cin>>c>>d;
        --c;
        --d;
        if(!uf.same(c,d)) continue;
        dame[c].insert(d);
        dame[d].insert(c);
    }

    for(int i=0; i<n; ++i){
        int mem=uf.size(i) -1;
        mem-=dame[i].size();
        cout<<mem<<" ";
    }
    cout<<endl;
}
