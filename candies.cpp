#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long int count=0,m;
	for(int i=0;i<n;++i){
		cin>>m;
		count+=m;
	}
	long long int sum=0;
	for(long long int i=1; ;i++){
		sum+=i;
		if(sum==count && i==n){
			cout<<"YES";
			break;
		}
		if(sum>count){
			cout<<"NO";
			break;
		}
	}
	return 0;
}
