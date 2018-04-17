#include<iostream>
#include<map>
using namespace std;
int main(){
	multimap<int,int> ma;
	int n,m;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>m;
		ma.insert(pair<int,int>(m,i));
	}
	multimap<int,int> :: iterator it;
	for(it=ma.begin();it!=ma.end();++it){
		cout<<it->first<<"-"<<it->second<<endl;
	}
	return 0;
}
