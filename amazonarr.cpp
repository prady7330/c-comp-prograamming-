#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		vector<int> v;
		int m;
		cin>>n;
		while(n--){
			cin>>m;
			v.push_back(m);
		}
		for(int i=1;i<v.size();++i) {
			if(v[i]<v[i]+v[i-1]) v[i]+=v[i-1];
		}
		vector<int> :: iterator it;
		it=max_element(v.begin(),v.end());
		cout<<*it<<endl;
	}
	return 0;
}
