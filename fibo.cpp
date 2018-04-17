#include<iostream>
using namespace std;
int main(){
	long double f[1000];
	int t;
	int k=0;
	int n=0;
	int max=0;
	long double num=1000000007;
	cin>>t;
	for(int i=0;i<t;++i){
		cin>>n;
		if(n>max && n<94){
			for(int j=max;j<=n;++j){
				if(j==0) f[j]=0;
				else if(j==1) f[j]=1;
				else f[j]=f[j-1]+f[j-2];
			}
			max=n;
		}
		cout<<f[n]%num<<endl;
	}
	return 0;
}
