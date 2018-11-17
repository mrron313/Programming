#include<stdio.h>

int main(){
	
	int t, l, n, k, arr[1000],a;
	
	scanf("%d",&t);
	
	while(t>0){
		scanf("%d",&l);
		scanf("%d",&n);
		k=0;
		
		while(k<n){
			scanf("%d",&a);
			if(k-l>=0){
				arr[k-l]=a;
			}else{
				arr[n-(l-k)]=a;
			}
			k++;
		}
		
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);
		
		
		printf("\n");
		t--;
	}
	
	return 0;
}
