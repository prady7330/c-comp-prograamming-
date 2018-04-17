#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
unsigned long long int SumOfPairwiseProduct(vector<unsigned long int> v){
	unsigned long long int ans=0;
	unsigned long int i,j,n=v.size();
	for(i=0;i<n;++i){
		for(j=i+1;j<n;++j)
			ans = ans + v[i] * v[j];
	}
	return ans;
}
int main(){
	unsigned long int n,i,q;
	unsigned long long int m;
	map<unsigned long long int,vector<unsigned long int> > ma;
	map<unsigned long long int,vector<unsigned long int> > :: iterator it;
	vector<unsigned long int> :: iterator iv;
	cin>>n;
	for(i=0;i<n;++i){
		cin>>m;
		vector<unsigned long int> v=ma[m];
		v.push_back(i+1);
		ma[m]=v;
	}
	cin>>q;
	for(i=0;i<q;++i){
		cin>>m;
		vector<unsigned long int> v;
		v.push_back(0);
		if(ma[m]!=v) cout<<SumOfPairwiseProduct(ma[m])<<endl;
	}
	return 0;
}
