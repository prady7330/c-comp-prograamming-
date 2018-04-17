#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	vector<long long int> v;
	long long int x;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>x;
		v.push_back(x);
	}
	int count=0;
	for(int i=0;i<n;++i){
		vector<long long int> v1(v.begin()+i,v.end());
		sort(v1.begin(),v1.end());
		count+=lower_bound(v1.begin(),v1.end(),v[i])-v1.begin();
	}
	cout<<count<<endl;
	return 0;
}
