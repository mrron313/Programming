#include<stdio.h>

int main(){
	
	int n, a,c=0, arr[1005], g=0, k=0, p=1,i;
	
	scanf("%d",&n);

	while(p<=n){
		scanf("%d",&a);
		if(a==1){
			c++;
			arr[k]=g;
			k++;
			g=1;
		}
		else if(a!=1) g++;
		p++;
	}
	arr[k++]=g;
	printf("%d\n",c);
	for(i=0;i<k;i++)
		if(arr[i]!=0) printf("%d ",arr[i]);
	
	return 0;
}
