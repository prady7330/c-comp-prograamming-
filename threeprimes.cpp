#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[10000]={0};
	vector<int> v;
	for(int i=2;i<10000;++i){
		if(arr[i]==0){
			for(int j=i;j<10000;j+=i){
				arr[j]++;
			}
		}
		if(arr[i]>=3) v.push_back(i);
		if(v.size()>=1000) break;
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
	return 0;
}
