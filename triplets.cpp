#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int x,y,z;
	unsigned int m;
	vector<unsigned int> p,q,r;
	cin>>x;
	for(int i=0;i<x;++i){
		cin>>m;
		p.push_back(m);
	}
	cin>>y;
	for(int i=0;i<y;++i){
		cin>>m;
		q.push_back(m);
	}
	cin>>z;
	for(int i=0;i<z;++i){
		cin>>m;
		r.push_back(m);
	}
	sort(p.begin(),p.end());
	sort(r.begin(),r.end());
	vector<unsigned int> :: iterator it,ir;
	int count=0;
	for(int i=0;i<y;++i){
		it=upper_bound(p.begin(),p.end(),q[i]);
		ir=lower_bound(r.begin(),r.end(),q[i]);
		count+=(it-p.begin())*(z-(ir-r.begin()));
	}
	cout<<count<<endl;
	return 0;
}
