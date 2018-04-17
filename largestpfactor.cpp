#include<iostream>
#define MAX 10000000
using namespace std;
long long int* prime=new long long int[MAX+5];
void sieve(){
	for(long long int i=0;i<=MAX;++i) {
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(long long int i=2;i<=MAX;++i){
		if(prime[i]==1){
			for(long long int j=i;j<=MAX;j+=i) {
				prime[j]=i;
			}
		}
	}
}
int main(){
	sieve();
	long long int* arr=new long long int[MAX+5];
	arr[0]=arr[1]=0;
	for(long long int i=2;i<=MAX;++i) {
		arr[i]=arr[i-1]+prime[i];
	}
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		cout<<arr[n]<<endl;
	}
	delete[] arr;
	delete[] prime;
	return 0;
}