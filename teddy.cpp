#include<iostream>
#include<string>
#define MAX 10000000
using namespace std;
int* primes=new int[MAX+5];
void sieve(){
	for(long long i=0;i<=MAX;++i) {
		primes[i]=1;
	}
	primes[0]=primes[1]=0;
	for(long long i=2;i<=MAX;++i){
		if(primes[i]==1){
			for(long long j=i*i;j<=MAX;j+=i) {
				primes[j]=0;
			}
			string s=to_string(i);
			if(s!=string(s.rbegin(),s.rend())) {
				primes[i]=0;
			}
		}
	}
	for(int i=1;i<=MAX;++i) {
		primes[i]+=primes[i-1];
	}
}
int main(){
	sieve();
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<primes[n]<<endl;
	}
	delete[] primes;
	return 0;
}