#include<iostream>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		string s;
		map<char,int> m;
		int flag=0;
		cin>>s;
		for(int i=0;i<s.size();++i){
			m[s[i]]==++m[s[i]];
			if(s[i]=='0'){
				if(m['0']==11 && m['1']<10){
					cout<<"LOSE"<<endl;
					flag=1;
					break;
				}
			}
			if(s[i]=='1'){
				if(m['1']==11 && m['0']<10){
					cout<<"WIN"<<endl;
					flag=1;
					break;
				}
			}
		}
		if(flag==0){
			if(m['0']-m['1']==2) cout<<"LOSE"<<endl;
			if(m['1']-m['0']==2) cout<<"WIN"<<endl;
		}
	}	
	return 0;
}
