#include<iostream>
#include<map>
using namespace std;
int main(){
	multimap<unsigned long int,unsigned long int> ma;
	unsigned long int m,n;
	unsigned long int x;
	unsigned long int count=0;
	unsigned long int a,b;
	multimap<unsigned long int,unsigned long int> :: iterator it;
	cin>>m>>n;
	for(unsigned long int i=0;i<m;++i){
		cin>>x;
		ma.insert(pair<unsigned long int,unsigned long int>(x,i));
	}
	for(unsigned long int i=0;i<n;++i){
		a=ma.rbegin()->first;
		b=ma.rbegin()->second;
		count+=a;
		ma.erase(a);
		a-=1;
		ma.insert(pair<unsigned long int,unsigned long int>(a,b));
	}
	cout<<count<<endl;
	
	return 0;
}
