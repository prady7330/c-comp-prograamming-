#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(2*b==a+c && b*b==a*c) cout<<"Both";
	else if(2*b==a+c && b*b!=a*c) cout<<"AP";
	else if(b*b==a*c && 2*b!=a+c) cout<<"GP";
	else cout<<"None";
	return 0; 
}