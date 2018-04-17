#include<iostream>
#include<vector>
using namespace std;
int main(){
	//int prime[10000001]={1};
	int* primes=new int[100000001];
	primes[100000000]=1;
	//prime[10000000]=1;
	//cout<<prime[10000000]<<endl;
	cout<<primes[100000000]<<endl;
	delete[] primes;
	return 0;
}
