#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<long long int> v,vcount;
	long long int n,m;
	cin>>n;
	for(long long int i=0;i<n;++i){
		cin>>m;
		v.push_back(m);
	}
	long long int count=0;
	long long int neg=0;
	for(long long int i=0;i<n;++i){
		if(v[i]>0){
			count++;
			if(neg%2==0) vcount.push_back(count);
			else vcount.push_back(count-1);
		}
		else if(v[i]<0){
			count++;
			neg++;
			if(neg%2==0) vcount.push_back(count);
		}
		else if(v[i]==0){
			if(neg%2==0){
				vcount.push_back(count);
			}
			count=0;
			neg=0;
		}
	}
	vector<long long int> :: iterator it=max_element(vcount.begin(),vcount.end());
	cout<<*it;
	return 0;
}
