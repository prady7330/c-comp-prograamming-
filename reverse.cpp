#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long int x;
	map<long long int,int> m;
	for(int i=0;i<n;++i){
		cin>>x;
		m[x]=++m[x];
	}
	map<long long int,int> :: iterator it,ir;
	it=m.begin();
	--it;
	ir=m.end();
	--ir;
	for( ; ir!=it;--ir) cout<<ir->first<<" ";
	return 0;
}