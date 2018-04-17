#include<iostream>
#include<sstream>
#include<map>
using namespace std;
int main(){
	map<string,long int> mw,ml;
	//map<string,long int> :: iterator it,ir;
	string s;
	int t;
	long int n,max1,max2;
	string st1,st2;
	cin>>t;
	for(int i=0;i<t;++i){
		cin>>n;
		max1=0;
		max2=0;
		st1="";
		st2="";
		for(long int j=0;j<n+1;++j){
			getline(cin,s);
			string s1,s2,s3;
			istringstream iss(s);
			iss>>s1>>s2>>s3;
			mw[s1]=++mw[s1];
			if(s1!="" && mw[s1]>max1){
				max1=mw[s1];
				st1=s1;
			}else if(s1!="" && mw[s1]==max1){
				if(s1<st1) st1=s1;
			}
			ml[s3]=++ml[s3];
			if(s3!="" && ml[s3]>max2){
				max2=ml[s3];
				st2=s3;
			}else if(s3!="" && ml[s3]==max2){
				if(s3<st2) st2=s3;
			}

		}
		cout<<st1<<" "<<st2<<endl;
		mw.clear();
		ml.clear();
	}
	return 0;
}
