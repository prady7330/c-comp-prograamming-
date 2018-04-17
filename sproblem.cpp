#include<iostream>
#include<bitset>
#include<cmath>
#define MAX 1000
using namespace std;

int prime[MAX+1];
void sieve(){
	for(int i=0;i<=MAX;++i) prime[i]=1;
	prime[0]=prime[1]=0;
	for(int i=2;i<=MAX;++i){
		if(prime[i]==1){
			for(int j=i*i;j<=MAX;j+=i) prime[j]=0;
		}
	} 
}
int main(){
	sieve();
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		int bits=(int)log2(n)+1;
		bitset<25> bs(n);
		int flag=0;
		for(int i=0;i<bits;++i){
			if(bs[i]==1){
				if(prime[i]!=1){
					flag=1;
					break;
				}
			}
			/*if(bs[i]==0){
				if(prime[i]!=0){
					flag=1;
					break;
				}
			}*/
		}
		if(flag==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
