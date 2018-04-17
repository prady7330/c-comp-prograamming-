#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	multimap<long long,int> m;
	long long ma;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>ma;
		m.insert(pair<long long,int>(ma,i));
	}
	multimap<long long,int> :: iterator it,ir,is;
	int count=0;
	it=m.end();
	--it;
	is=m.begin();
	--is;
	for(;it!=is;--it){
		for(ir=--it;ir!=is;--ir){
			if(it->second<ir->second) count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
