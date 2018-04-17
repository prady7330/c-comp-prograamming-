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
	int n;
	int a,b;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a>>b;
		int count=0;
		for(int j=a;j<=b;++j){
			if(j<10){
				if(j==2 || j==3 || j==5 || j==7) count++; 
			}
			else if(j>=10){
				int x=j%10;
				if(x==0 || x==2 || x==5 || x==6 || x==8) continue;
				else{
					if(isPrime(j)) count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
