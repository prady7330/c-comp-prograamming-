#include<iostream>
#define MAX 10000000
using namespace std;
long long int* prime=new long long int[MAX+5];
void sieve(){
	for(long long int i=0;i<=MAX;++i){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(long long int i=2;i<=MAX;++i){
		prime[i]+=prime[i-1];
		for(long long int j=i;j<=MAX;j+=i){
			prime[j]+=i;
		}
	}
}
int main(){
	sieve();
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		cout<<prime[n]<<endl;
	}
	delete[] prime;
	return 0;
}
