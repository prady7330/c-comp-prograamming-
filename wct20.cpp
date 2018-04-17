#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		long long int n;
		cin>>n;
		int count=0;
		if(ceil(log2(n))==floor(log2(n))) cout<<"1"<<endl;
		else{
			while(1){
				if(ceil(log2(n))==floor(log2(n))){
					count++;
					break;
				}
				else{
					long long int b1=(long long int)log2(n);
					long long int b2=(long long int)pow(2,b1);
					count++;
					n=n-b2;
				}
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
