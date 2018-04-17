#include<stdio.h>
int main(){
	long long int ma[1005][1005];
	int n,m,i,j,k,l;
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;++i){
		for(j=0;j<n;++j)
			scanf("%lld",&ma[i][j]);
	}
	k=0;
	l=0;
	int count=0;
	while(k<m && l<n){
		if(l<n && k<m){
			for(i=l;i<n;++i) printf("%lld ",ma[k][i]);
			k++;
		}
		if(l<n && k<m){
			for(i=k;i<m;++i) printf("%lld ",ma[i][n-1]);
			n--;
		}
		if(l<n && k<m){
			for(i=n-1;i>=l;--i) printf("%lld ",ma[m-1][i]);
			m--;
		}
		if(l<n && k<m){
			for(i=m-1;i>=k;--i) printf("%lld ",ma[i][l]);
			l++;
		}
	}
	return 0;
}
