#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool sortvec(pair<char,int> a,pair<char,int> b){
	return (a.first<b.first);
}
bool sortvec2(pair<char,int> a,pair<char,int> b){
	return a.second>b.second;
}
int main(){
	map<char,int> m;
	string s;
	cin>>s;
	for(int i=0;i<s.size();++i) m[s[i]]=++m[s[i]];
	vector<pair<char,int> > v(m.begin(),m.end());
	cout<<v.size()<<endl;
	sort(v.begin(),v.end(),sortvec);
	stable_sort(v.begin(),v.end(),sortvec2);
	vector<pair<char,int> > :: iterator it;
	for(it=v.begin();it!=v.end();++it) cout<<it->first<<" "<<it->second<<endl;
	return 0;
}
