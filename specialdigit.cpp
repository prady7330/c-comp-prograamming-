#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	for(int i=100;i<=9999;++i){
		string s=to_string(i);
		if(s.find('0')!=std::string::npos) continue;
		if(s.find('2')!=std::string::npos) continue;
		if(s.find('3')!=std::string::npos) continue;
		if(s.find('4')!=std::string::npos) continue;
		if(s.find('6')!=std::string::npos) continue;
		if(s.find('8')!=std::string::npos) continue;
		cout<<s<<endl;
	}
	return 0;
}
