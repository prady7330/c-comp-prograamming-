#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	multimap<long long int,int> m;
	multimap<long long int,int> :: iterator it;
	long long int x;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>x;
		m.insert(pair<long long int,int>(x,i));
		if((i+1)%2!=0){
			
			 
		}else if((i+1)%2==0){
			
		}
	}
	return 0;
}
