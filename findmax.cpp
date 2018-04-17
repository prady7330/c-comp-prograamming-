#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		vector<long long int> v;
		int n;
		long long int m;
		cin>>n;
		multimap<long long int,int> ma;
		for(int i=0;i<n;++i){
			cin>>m;
			v.push_back(m);
			ma.insert(pair<long long int,int>(m,i));
		}
		sort(v.begin(),v.end(),greater<long long int>());
		vector<long long int> :: iterator it,ir;
		int flag=0;
		for(it=v.begin();it!=v.end();++it){
			ir=it;
			ir++;
			for( ;ir!=v.end();++ir){
				if(2*(*it-*ir)==*it){
					int x=ma.count(*it-*ir);
					if(x>1){
						flag=1;
						break;
					}
				}
				else{
					int x=ma.count(*it-*ir);
					if(x>0){
						flag=1;
						break;
					}
				}
			}
			if(flag==1){
				cout<<*it<<endl;
				break;
			}
		}
		if(flag==0) cout<<"-1"<<endl;
	}
	return 0;
}
