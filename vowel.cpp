#include<iostream>
#include<map>
using namespace std;
int main(){
	map<char,int> m;
	m['a']=1;
	m['e']=1;
	m['i']=1;
	m['o']=1;
	m['u']=1;
	m['A']=1;
	m['E']=1;
	m['I']=1;
	m['O']=1;
	m['U']=1;
	char c;
	cin>>c;
	if(m[c]==0) cout<<"NO";
	else cout<<"YES";
	return 0;
}