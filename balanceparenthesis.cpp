#include<iostream>
#include<stack>
using namespace std;
int main(){  
	string str;
	int t;
	cin>>t;
	int count;
	for(int i=0;i<t;++i){
		stack<char> stk;
		count=0;
		cin>>str;
		for(int j=0;j<str.length();++j){
			if(str[j]=='(') stk.push(str[j]);
			else if(str[j]==')'){
				if(stk.empty() || stk.top()==')') stk.push(str[j]);
				else if(stk.top()=='(') stk.pop();
			}
		}
		if(stk.empty()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
