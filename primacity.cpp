#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 10000000
long long int* prime=new long long int[MAX+1];
void sieve(){
	for(long long i=0;i<=MAX;++i) prime[i]=0;
	prime[0]=prime[1]=0;
	for(long long i=2;i<=MAX;++i){
		if(prime[i]==0){
			for(long long j=i;j<=MAX;j+=i){
				prime[j]++;
			}
		}
	}
}
int main(){
	sieve();
	//for(int i=0;i<=100;++i) cout<<prime[i]<<" ";
	int t;
	cin>>t;
	while(t--){
		long long a,b,k;
		cin>>a>>b>>k;
		long long cnt=count(prime+a,prime+b+1,k);
		cout<<cnt<<endl;
	}
	delete[] prime;
	return 0;
}
