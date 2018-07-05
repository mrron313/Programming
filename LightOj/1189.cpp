#include<stdio.h>

int main(){
	
	int t, i=1, f[21], k;
	long long n, a[21] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 
					87178291200, 1307674368000, 20922789888000, 355687428096000, 6402373705728000, 121645100408832000, 
					2432902008176640000};
	
	scanf("%d",&t);
	
	char ar[100];
	
	while(i<=t){
		k=0;
		scanf("%lld",&n);
		
		for(int p=20; p>=0; p--){
			if(n-a[p]>=0){
				n=n-a[p];
				f[k]=p;
				k++;
			}
		}
		
		printf("Case %d: ",i);
		i++;
		if(n!=0)
			printf("impossible");
		else if(n==0){
			printf("%d!",f[k-1]);
			for(int l=k-2; l>=0; l--){
				printf("+%d!",f[l]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
