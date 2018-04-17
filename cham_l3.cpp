#include<iostream>
#include<map>
using namespace std;
int main(){
	multimap<long int,long int> ma;
	long int m,n,i,x,a,b,count=0;
	multimap<long int,long int> :: iterator it;
	cin>>m>>n;
	for(i=0;i<m;++i){
		cin>>x;
		ma.insert(pair<long int,long int>(x,i));
	}
	for(i=0;i<n;++i){
		a=ma.rbegin()->first;
		b=ma.rbegin()->second;
		it=ma.end();
		--it;
		ma.erase(it);
		ma.insert(pair<long int,long int>(a-1,b));
		count+=a;
	}
	cout<<count;
	return 0;
}