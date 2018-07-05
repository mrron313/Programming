#include<stdio.h>

int main(){
	
	int t, i=1, n, p, q, a, k,w;
	
	scanf("%d",&t);
	
	while(i<=t){
		scanf("%d",&n);
		scanf("%d",&p);
		scanf("%d",&q);
		k=0;w=0;
		
		while(n>0){
			scanf("%d",&a);
			if(k+1<=p && w+a<=q){
				k++;
				w+=a;
			}
			n--;
		}
		printf("Case %d: %d\n",i,k);
		i++;
		
	}
	
	return 0;
}
