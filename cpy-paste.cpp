#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
	vector<unsigned long long int > v;
	set<unsigned long long int> s;
	int t,n;
	unsigned long long int m;
	cin>>t;
	for(int i=0;i<t;++i){
		cin>>n;
		for(int j=0;j<n;++j){
			cin>>m;
			v.push_back(m);
		}
		for(int j=0;j<n;++j) s.insert(v[j]);
		cout<<s.size()<<endl;
		s.clear();
		v.clear();
	}
	return 0;
}