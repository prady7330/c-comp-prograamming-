#include<iostream>
#include<map>
using namespace std;
int main(){
	long int t,q;
	map<long int,long int> m;
	cin>>t>>q;
	long int x;
	while(t--){
		cin>>x;
		m[x]++;
	}
	long int a;
	map<long int,long int> :: iterator it,is;
	while(q--){
		cin>>a;
		long int count=0;
		for(it=m.begin();it!=m.end();++it){
			if(a % (it->first) ==0 && it->second!=0){
				count+=it->second;
			}
			if(it->first > a/2 ){
				if(m[a]!=0){
					cout<<count+1<<endl;
				}
				else{
					cout<<count<<endl;
				}
				break;
			}
		}
	}
	return 0;
}
