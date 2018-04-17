#include<iostream>
using namespace std;
long long* primes=new long long[10000005];
long long prime;
void sieve(){
	for(long long i=0;i<=10000000;++i) primes[i]=1;
	primes[0]=primes[1]=0;
	for(long long i=2;i*i<=10000000;++i){
		if(primes[i]==1){
			primes[i]=i;
			prime=i;
			for(long long j=i*i;j<=10000000;j+=i) primes[j]=0;
		}
		else if(primes[i]==0){
			primes[i]=prime;
		}
	}
}
int main(){
	sieve();
	//for(int i=0;i<100;++i) cout<<primes[i]<<" ";
	long long t;
	cin>>t;
	long long * arr=new long long[10000005];
	arr[0]=arr[1]=0;
	for(long long i=2;i<=10000000;++i){
		arr[i]=arr[i-1]+primes[i];
	}
	while(t--){
		long long n;
		cin>>n;
		cout<<arr[n]<<endl;
	}
	delete[] arr;
	delete[] primes;
	return 0;
}
