#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> v;
	int n;
	cin>>n;
	int m;
	for(int i=0;i<n;++i){
		cin>>m;
		v.push_back(m);
	}
	int q;
	cin>>q;
	for(int i=0;i<q;++i){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1){
			int max=0;
			if(b==c) max=1;
			else{
				for(int j=b;j<=c;++j){
					int coun=count(v.begin()+b,v.begin()+c,v[j]);
					if(coun>max) max=coun;
				}
			}
			cout<<max<<endl;
		}
		if(a==2){
			v[b]=c;
		}
	}
	return 0;
}
