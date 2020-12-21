//============================================================================
// Name        : c.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;cin>>n;
	int m;cin>>m;
	vector<int> p(m),y(m),f(m);
//	vector<int> pk(n+1,0);
	vector<vector<pair<int,int>>> pv(n+1);

	for(int i=0;i<m;i++){
		cin>>p[i]>>y[i];
//		pk[p[i]]++;
		pv[p[i]].push_back(make_pair(y[i],i));
	}

	for(int i=1;i<=n;i++){
		sort(pv[i].begin(),pv[i].end());
//		for(int j=0;j<pv[i].size();j++){
//			cout<<pv[i][j].first<<' '<<pv[i][j].second<<endl;
//		}
//		cout<<endl;
		for(int j=0;j<pv[i].size();j++){
			f[pv[i][j].second]=j+1;
		}
	}

	for(int i=0;i<m;i++){
			for(int k=1;k<=5-(int)log10(p[i]);k++){
				cout<<0;
			}
			cout<<p[i];

			for(int k=1;k<=5-(int)log10(f[i]);k++){
				cout<<0;
			}
			cout<<f[i]<<endl;;

	}

	return 0;
}
