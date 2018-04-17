#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<long long> v;
	long long m;
	while(n--){
		cin>>m;
		v.push_back(m);
	}
	sort(v.begin(),v.end(),greater<long long>());
	long long count,max;
	max=0;
	int l=v.size();
	do{
		count=0;
		for(int i=0;i<l-1;i++){
			count+=abs(v[i]-v[i+1]);
		}
		if(count>max) max=count;
	}while(prev_permutation(v.begin(),v.end()));
	cout<<max;
	return 0;
}
