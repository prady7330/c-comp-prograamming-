#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int arr[1005];
	cin>>n;
	map<int, vector<int> > m;
	for(int i=0;i<n;++i){
		cin>>arr[i];
		m[arr[i]].push_back(i);
	}
	int q;
	cin>>q;
	for(int i=0;i<q;++i){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1){
			int max=0;
			vector<int> :: iterator it,ir;
			for(int j=b;j<=c;++j){
				int s=arr[j];
				it=lower_bound(m[s].begin(),m[s].end(),b);
				ir=upper_bound(m[s].begin(),m[s].end(),c);
				if(it==ir) max=1;
				else if(distance(it,ir)>max) max=distance(it,ir);
			}
			cout<<max<<endl;
		}
		if(a==2){
			int s=arr[b];
			arr[b]=c;
			vector<int> :: iterator it;
			it=find(m[s].begin(),m[s].end(),b);
			if(it!=m[s].end()) m[s].erase(it);
			m[c].push_back(b);
			sort(m[c].begin(),m[c].end());
		}
	}
	return 0;
}
