#include<iostream>
#include<bitset>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=10000;++i){
		bitset<16> bset(i);
		if(bset.count()==n) cout<<i<<endl;
	}
	return 0;
}