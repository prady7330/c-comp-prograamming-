#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
	map<unsigned long long int,int> ma;
	unsigned long long int m;
	long long n,t;
	cin>>t;
	for(long long i=0;i<t;++i){
		cin>>n;
		for(long long j=0;j<n;++j){
			cin>>m;
			ma[m]=++ma[m];
			if(ma[m]>1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		ma.clear();
	}
	return 0;
}
