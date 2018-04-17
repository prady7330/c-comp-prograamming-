#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 1000000000000000000
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long int arr[101][101];
		vector<long long int> v;
		for(int i=0;i<n;++i){
			long long int localmin=MAX;
			for(int j=0;j<m;++j){
				cin>>arr[i][j];
				if(arr[i][j]<localmin) localmin=arr[i][j];
			}
			v.push_back(localmin);
		}
		vector<long long int> :: iterator it=max_element(v.begin(),v.end());
		cout<<*it<<endl;
	}
	return 0;
}
