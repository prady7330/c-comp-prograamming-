#include<iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		int n;
		int count=0;
		cin>>n;
		for(int j=2;j<n+2;++j){
			if(isPrime(j)) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
