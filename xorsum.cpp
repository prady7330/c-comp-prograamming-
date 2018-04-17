#include<iostream>
#define MAX 100000
using namespace std;
int main(){
	long long int t;
	cin>>t;
	long long int arr[MAX+5];
	arr[0]=0;
	long long int m;
	for(long long int i=1;i<=t;++i){
		cin>>m;
		arr[i]=arr[i-1]^m;
	}
	long long int q;
	cin>>q;
	while(q--){
		long long int l,r;
		long long int x=0;
		cin>>l>>r;
		
	}
	return 0;
}
