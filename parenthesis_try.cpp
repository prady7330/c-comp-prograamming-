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
		if(stk.empty()) cout<<"0"<<endl;
		else if(stk.size()%2!=0) cout<<"-1"<<endl;
		else{
			while(!stk.empty()){
				if(stk.top()=='('){
					stk.pop();
					if(stk.top()=='('){
						count++;
						stk.pop();
					}else if(stk.top()==')'){
						count=count+2;
						stk.pop();
					}
				}else if(stk.top()==')'){
					stk.pop();
					if(stk.top()==')'){
						count++;
						stk.pop();
					}
				}
			}
			cout<<count<<endl;
		}
		
	}
	return 0;
}
