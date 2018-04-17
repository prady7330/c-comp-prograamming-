#include<iostream>
#include<map>
#include<vector>
using namespace std;
long long * arr=new long long[100001];
void sieve(){
	for(long long i=0;i<=100000;++i) arr[i]=1;
	arr[0]=0;
	for(long long i=2;i<=100000;++i){
			for(long long j=i;j<=100000;j+=i) arr[j]++;
	}
}
int main(){
	sieve();
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long gcd;
		while(1){
			if(arr[a]==2 && arr[b]==2){
				gcd=1;
				break;
			}
			else if(a==1 || b==1){
				gcd=1;
				break;
			}
			else{
				if(a>b){
					a=a%b;
				}
				if(b>a){
					b=b%a;
				}
			}
			if(a==0) {
				gcd=b;
				break;
			}
			if(b==0) {
				gcd=a;
				break;
			}
		}
		if(gcd==1) cout<<arr[1]<<endl;
		else cout<<arr[gcd]-1<<endl;
	}
	delete[] arr;
	return 0;
}
