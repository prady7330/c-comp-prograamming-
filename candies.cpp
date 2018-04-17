#include<iostream>
#include<map>
using namespace std;
int main(){
	long int t,n,k,i,j;
	long long int m,a,b,count;
	multimap<long long int,long int> ma;
	multimap<long long int,long int> :: iterator it;
	cin>>t;
	for(i=0;i<t;++i){
		ma.clear();
		cin>>n>>k;
		count=0;
		for(j=0;j<n;++j){
			cin>>m;
			ma.insert(pair<long long int,long int>(m,i));
		}
		for(j=0;j<k;++j){
			a=ma.rbegin()->first;
			b=ma.rbegin()->second;
			it=ma.end();
			--it;
			ma.erase(it);
			ma.insert(pair<long long int,long int>(a/2,b));
			count+=a;
		}
		cout<<count<<endl;
	}
	return 0;
}
