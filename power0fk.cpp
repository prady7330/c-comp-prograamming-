#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		long long int l,k,r;
		cin>>l>>r>>k;
		if(l==1 || l==0){
			int count=0;
			for(int j=0; ; j++){
				long long int a=pow(k,j);
				if(a>r) break;
				if(a>= l && a<=r) {
					cout<<a<<" ";
					count++;
				}
			}
			if(count==0) cout<<"-1"<<endl;
			cout<<endl;
		}
		else{
			int a=(log(l)/log(k));
			int b=(log(r)/log(k));
			int count=0;
			if(a!=0 && b!=0){
				for(int j=a+1;j<=b;++j){
					long long int x=pow(k,j);
					cout<<x<<" ";
					count++;
				}
			}
			if(count==0) cout<<"-1"<<endl;
			cout<<endl;
		}
	}
	return 0;
}