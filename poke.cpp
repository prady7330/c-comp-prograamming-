#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<long int> sieve(100005,1);
	sieve[0]=sieve[1]=0;
	for(long int i=2;i*i<=100001;++i){
		if(sieve[i]==1){
			for(long int j=i*i;j<=100001;j=j+i) sieve[j]=0;
		}
	}
	for(long int i=1;i<=100001;++i) sieve[i]+=sieve[i-1];
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		cout<<sieve[n+1]<<endl;
	}
	return 0;
}
