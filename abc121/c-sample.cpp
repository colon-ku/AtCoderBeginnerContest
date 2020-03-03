#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define SP <<" "<<
#define MOD 1000000007
#define IINF 1000000000
#define LINF 1000000000000000000

typedef long long LL;
typedef long double LD;

int main(){
  int n,m;
  cin >> n >> m;
  vector<pair<LL,LL>> p(n);
  for(int i=0;i<n;i++){
    cin >> p[i].first >> p[i].second;
  }
  sort(all(p));
  LL ans=0;
  for(int i=0;i<n;i++){
    if(p[i].second<m){
      ans+=p[i].first*p[i].second;
      m-=p[i].second;
    }else{
      ans+=m*p[i].first;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
