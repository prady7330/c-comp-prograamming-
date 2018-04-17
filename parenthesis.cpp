#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<char> s;
	string st;
	int t,i,j,count;
	char x,y;
	cin>>t;
	for(i=0;i<t;++i){
		cin>>st;
		count=0;
		for(j=0;j<st.length();++j){
			if(st[j]=='('){
				if(s.empty()){
					s.push(st[j]);
				}else{
					s.push(st[j]);
				}
			}else if(st[j]==')'){
				if(s.empty()){
					s.push(st[j]);
				}else{
					if(s.top()=='('){
						s.pop();
					}else if(s.top()==')'){
						s.push(st[j]);
					}
				}
			}
		}
		/*cout<<"now"<<endl;
		for(i=0;i<s.size();++i){
			cout<<s.top()<<endl;
			s.pop();
		}*/
		if(s.empty()) cout<<"0"<<endl;
		else if(s.size()%2!=0) cout<<"-1"<<endl;
		else{
			while(!s.empty()){
				if(s.top()=='('){
					s.pop();
					if(s.top()=='('){
						count++;
						s.pop();
					}else if(s.top()==')'){
						count=count+2;
						s.pop();
					}
				}else if(s.top()==')'){
					s.pop();
					if(s.top()==')'){
						count++;
						s.pop();
					}
				}
			}
			cout<<count<<endl;
		}
		
	}
	return 0;
}
