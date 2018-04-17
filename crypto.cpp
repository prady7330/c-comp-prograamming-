#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		string s;
		cin>>s;
		string original="";
		if(s.size()%2==0){
			long long int i;
			for(i=0;i<s.size();++i){
				if(i%2!=0){
					original=original+s[i];
				}else{
					original=s[i]+original;
				}
			}
			cout<<original<<endl;
		}
		else{
			for(long long int i=0;i<s.size();++i){
				if(i%2!=0){
					original=s[i]+original;
				}else{
					original=original+s[i];
				}
			}
			cout<<original<<endl;
		}
	}
	return 0;
}
