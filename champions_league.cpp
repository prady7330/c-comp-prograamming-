#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	unsigned long long int m,n;
	vector<unsigned long long int> v;
	unsigned long long int x;
	long long int count=0;
	cin>>m>>n;
	for(unsigned long long int i=0;i<m;++i){
		cin>>x;
		v.push_back(x);
	}
	vector<unsigned long long int> :: iterator it;
	for(unsigned long long int i=0;i<n;++i){
		it=max_element(v.begin(),v.end());
		count+=*it;
		*it=*it-1;
	}
	cout<<count<<endl;
	return 0;
}
