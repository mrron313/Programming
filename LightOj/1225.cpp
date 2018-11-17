#include<stdio.h>

int main(){
	
	int t, i=1;
	long long m, n, p;
	
	scanf("%d",&t);
	
	while(i<=t){
		scanf("%lld",&m);
		n=0;
		p=m;
		while(m!=0){
			n=n*10+m%10;
			m=m/10;
		}
		printf("Case %d: ",i);
		
		if(p==n)
			printf("Yes\n");
		else 
			printf("No\n");
		
		i++;
	}
	return 0;
}
