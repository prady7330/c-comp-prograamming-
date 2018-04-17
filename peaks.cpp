#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
	int x,y,xy[1005][1005];
	map<int,vector<pair<int,int> > > m;
	cin>>x>>y;
	for(int i=0;i<x;++i){
		for(int j=0;j<y;++j){
			cin>>xy[i][j];
			if(i!=0 && j!=0 && i!=x-1 && j!=y-1 && xy[i][j]>=xy[i-1][j-1] && xy[i][j]>=xy[i-1][j] && xy[i][j]>=xy[i-1][j+1] && xy[i][j]>=xy[i][j-1]){
				m[xy[i][j]].push_back(pair<int,int>(i,j));
			}else m[xy[i][j]].push_back(pair<int,int>(i,j));
		}
	}
	map<int,vector<pair<int,int> > > :: iterator it,is;
	vector<pair<int,int> > :: iterator ir;
	int count=0;
	is=m.end();
	--is;
	for(it=m.begin();it!=m.end();++it){
		if(m.size()<=1) break;
		it++; 
		if(it==is) break;
		//cout<<it->first<<"-";
		for(ir=it->second.begin();ir!=it->second.end();++ir){
			//cout<<"("<<ir->first<<","<<ir->second<<")"<<","<<endl;
			int i=ir->first;
			int j=ir->second;
			int p=xy[i][j];
			if(i!=0 && i!=x-1 && j!=0 && j!=y-1){
				int a=xy[i][j+1];
				int b=xy[i+1][j-1];
				int c=xy[i+1][j];
				int d=xy[i+1][j+1];
				if(p>=a && p>=b && p>=c && p>=d) count++;
			}
		}
	}
	count+=m.rbegin()->second.size();
	cout<<count<<endl;
	return 0;
}
