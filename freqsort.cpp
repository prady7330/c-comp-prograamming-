#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool bysec(pair<long long,long long > a,pair<long long ,long long > b){
	return (a.second < b.second) ;
}
bool byfir(pair<long long,long long > a,pair<long long ,long long > b){
	return (a.second < b.second) ;
}
int main(){
	int n;
	cin>>n;
	map<long long ,long long> m;
	long long ma;
	while(n--){
		cin>>ma;
		m[ma]=++m[ma];
	}
	vector<pair<long long,long long> > v(m.begin(),m.end());
	stable_sort(v.begin(),v.end(),byfir);
	stable_sort(v.begin(),v.end(),bysec);
	for(long long i=0;i<v.size();++i) cout<<v[i].first<<" ";
	return 0;
}
