#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		long long int n,k;
		cin>>n>>k;
		long long int r=n%k;
		cout<<(n+k-r)<<endl;
	}
	return 0;
}