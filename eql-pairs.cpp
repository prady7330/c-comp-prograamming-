#include<iostream>
#include<map>
using namespace std;
int main(){
	map<long long int,long long int> m;
	long long int x;
	long long int n;
	cin>>n;
	long long int count=0;
	for(long long int i=0;i<n;++i){
		cin>>x;
		m[x]=++m[x];
	}
	map<long long int,long long int> :: iterator it;
	for(it=m.begin();it!=m.end();++it){
		if(it->second>1){
			count+=((it->second)*(it->second-1))/2;
		}
	}
	cout<<count<<endl;
	return 0;
}
