#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
	int t;
	int a,b;
	cin>>t;
	multimap<int,int> m;
	multimap<int,int> :: iterator it;
	for(int i=0;i<t;++i){
		cin>>a;
		if(a==1){
			cin>>b;
			m.insert(pair<int,int>(b,i));
		}
		else if(a==2){
			cin>>b;
			it=m.find(b);
			if(it==m.end()) cout<<"-1"<<endl;
			else m.erase(it);
		}
		else if(a==3){
			if(m.empty()) cout<<"-1"<<endl;
			else cout<<m.rbegin()->first<<endl;
		}
		else if(a==4){
			if(m.empty()) cout<<"-1"<<endl;
			else cout<<m.begin()->first<<endl;
		}
	}
	return 0;
}