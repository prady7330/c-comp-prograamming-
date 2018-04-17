#include<iostream>
using namespace std;
int main(){
	int v[1001];
	int t,n;
	cin>>t;
	for(int i=0;i<t;++i){
		cin>>n;
		int flag=0;
		for(int j=0;j<n;++j) cin>>v[j];
		int* p=v;
		int* q=&v[n-1];
		while(p<q){
			if(*p!=*q){
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
			p++;
			q--;
		}
		if (flag==0) cout<<"YES"<<endl;
	}
	return 0;
}
