#include<iostream>
#include<sstream>
using namespace std;
int main(){
	string s,s1,s2,s3,s4,s5;
	long int t,i;
	long int a,b;
	cin>>t;
	for(i=0;i<t+1;++i){
		getline(cin,s);
		istringstream iss(s);
		iss>>s1>>s2>>s3>>s4>>s5;
		if(s1=="?"){
			istringstream ist(s3);
			ist>>a;
			istringstream ists(s5);
			ists>>b;
			cout<<b-a<<endl;
		}
		if(s3=="?"){
			istringstream ist(s1);
			ist>>a;
			istringstream ists(s5);
			ists>>b;
			cout<<b-a<<endl;
		}
		if(s5=="?"){
			istringstream ist(s1);
			ist>>a;
			istringstream ists(s3);
			ists>>b;
			cout<<b+a<<endl;
		}
	}
	return 0;
}