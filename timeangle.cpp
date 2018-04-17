#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;
int main(){
	std::cout << std::fixed;
    std::cout << std::setprecision(1);
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		string s;
		cin>>s;
		istringstream iss(s);
		float  a,b;
		char c;
		iss>>a>>c>>b;
		//cout<<a<<" "<<b;
		if(a>12){
			a=a-12;
		}
		if(a==12) a=0;
		//cout<<a<<" "<<b<<endl;
		if(b/(float)5>a){
			float minangle=b*6;
			float hourangle=a*30+(b/(float)60)*30;
			float angle1=minangle-hourangle;
			float angle2=360-angle1;
			if(angle1<angle2) cout<<angle1<<endl;
			else if(angle1>angle2) cout<<angle2<<endl;
		}
		else if(b/(float)5<a){
			float minangle=b*6;
			float hourangle=a*30+(b/(float)60)*30;
			float angle1=hourangle-minangle;
			float angle2=360-angle1;
			if(angle1<angle2) cout<<angle1<<endl;
			else if(angle1>angle2) cout<<angle2<<endl;
		}
		else{
			cout<<"0.0"<<endl;
		}
	}
	return 0;
}
