#include<iostream>
using namespace std;
int main(){
	char arr[26];
	for(int i=0;i<26;++i){
		arr[i]=char(i+65);
	}
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		if(n==0) continue;
		string s;
		while(n>0){
			s=arr[(n-1)%26]+s;
			n=(n-1)/26;
		}
		cout<<s<<endl;
	}
	return 0;
}
