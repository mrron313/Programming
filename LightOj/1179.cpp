#include<stdio.h>

int func(int N,int k){
	int n,m ;
	
	n=m=1;
	
	while(n<=N){
		m = (m+(k-1))%n+1;
		n++;
	}
	
	return m;
}


int main(){
	
	int t, i=1, n, k;
	
	scanf("%d",&t);
	
	while(i<=t){
		
		scanf("%d%d",&n,&k);
		printf("Case %d: %d\n",i,func(n,k));
		i++;
	}
	
	return 0;
}
