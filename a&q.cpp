#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long arr[100005];
	long long m;
	arr[0]=0;
	for(long long i=1;i<=n;++i){
		cin>>m;
		arr[i]=arr[i-1]+m;
	}
	long long q;
	cin>>q;
	while(q--){
		long long  l,r;
		cin>>l>>r;
		cout<<arr[r]-arr[l-1]<<endl;
	}
	return 0;
}
