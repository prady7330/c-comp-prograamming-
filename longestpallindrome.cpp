#include<iostream>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		string s;
		cin>>s;
		map<char,int> m;
		for(int i=0;i<s.size();++i) m[s[i]]=++m[s[i]];
		map<char,int> :: iterator it;
		int doub=0,sing=0;
		for(it=m.begin();it!=m.end();++it){
			if(it->second==1) sing++;
			else if((it->second)%2==1){
				doub+=(it->second)/2;
				sing++;
			}
			else if((it->second)%2==0) doub+=(it->second)/2;
		}
		cout<<2*doub+1<<endl;
	}
	return 0;
}
