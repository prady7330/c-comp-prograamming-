#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.size();++i){
		int a=s[i]-'0';
		count+=a;
	}
	cout<<count;
	return 0;
}
