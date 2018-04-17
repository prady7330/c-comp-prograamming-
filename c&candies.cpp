#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int n;
		cin>>n;
		vector<int> v;
		int m;
		long long int count=0;
		for(int j=0;j<n;++j){
			cin>>m;
			count+=m;
			v.push_back(m);
		}
		if(count%n!=0) cout<<"-1"<<endl;
		else{
			long long int sum=0;
			int mid=count/n;
			for(int j=0;j<n;++j){
				if(v[j]<mid) sum+=mid-v[j]; 
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
