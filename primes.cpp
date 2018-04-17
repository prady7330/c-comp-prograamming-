#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> sieve(100005,1);
	sieve[0]=sieve[1]=0;
	for(int i=2;i*i<=100000;++i){
		if(sieve[i]==1){
			for(int j=i*i;j<=100000;j+=i) sieve[j]=0;
		}
	}
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int l,r;
		cin>>l>>r;
		int count=0;
		for(int j=l;j<=r;++j){
			if(sieve[j]==1) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
