#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(string a,string b){
	return a+b<b+a;
}
int main(){
	int n,i;
	cin>>n;
	vector<string> v;
	string s;
	for(i=0;i<n;++i){
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(),v.end(),cmp);
	for(i=0;i<n;++i) cout<<v[i];
	return 0;
}
