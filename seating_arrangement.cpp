#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int n,m;
		cin>>n>>m;
		vector<int> v1,v2,v3,v4;
		int people=1;
		for(int j=0;j<n && people<=m ;++j){
			v1.push_back(people);
			people++;
			if(people>m) break;
			v4.push_back(people);
			people++;
			if(people>m) break;
		}
		for(int j=0;j<n && people<=m;++j){
			v2.push_back(people);
			people++;
			if(people>m) break;
			v3.push_back(people);
			people++;
			if(people>m) break;
		}
		vector<int> :: iterator iw,ix,iy,iz;
		iw=v1.begin();
		ix=v2.begin();
		iy=v3.begin();
		iz=v4.begin();
		while(iw!=v1.end() || ix!=v2.end() || iy!=v3.end() || iz!=v4.end()){
			if(ix!=v2.end()){
				cout<<*ix<<" ";
				++ix;
			}
			if(iw!=v1.end()){
				cout<<*iw<<" ";
				++iw;
			}
			if(iy!=v3.end()){
				cout<<*iy<<" ";
				++iy;
			}
			if(iz!=v4.end()){
				cout<<*iz<<" ";
				++iz;
			}
		}
		cout<<endl;
	}
	return 0;
}
