#include<iostream>
#include<map>
#include<vector>
#define MAX 1000000
using namespace std;
double* prime=new double[MAX+5];
void sieve(){
	for(long long int i=0;i<=MAX;++i){
		prime[i]=1;
	}
	prime[0]=0;
	for(long long int i=2;i<=MAX;++i){
		if(prime[i]==1){
			for(long long int j=i+i;j<=MAX;j+=i){
				prime[j]*=(1.0-(1.0/(float)i));
			}
		}
	}
	for(long long int i=1;i<=MAX;++i){
		if(prime[i]!=1){
			prime[i]*=i;
		}
		if(prime[i]==1 && i!=1){
			prime[i]=i-1;
		}
	}
}
int main(){
	sieve();
	long long int t,q;
	cin>>t;
	while(t--){
		cin>>q;
		cout<<prime[q]<<endl;
	}
	delete[] prime;
	return 0;
}

