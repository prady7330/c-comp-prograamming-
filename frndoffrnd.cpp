#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,m;
	unsigned long long int id;
	map<unsigned long long int,int> bf,bff;
	map<unsigned long long int,int> :: iterator it;
	long int count=0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>id;
		bf[id]=1;
		cin>>m;
		for(int j=0;j<m;++j){
			cin>>id;
			bff[id]=1;
		}
	}
	for(it=bff.begin();it!=bff.end();++it){
		if(bf[it->first]==0) count++;
	}
	cout<<count;
	return 0;
}
