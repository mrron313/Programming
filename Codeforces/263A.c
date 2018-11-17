#include<stdio.h>

int main(){
	
	int arr[6][6], i, j, a, b, x, y;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==1){
				x = i;
				y = j;
			} 
		}
	}
	
	a = 3-x; if(a<0) a=0-a;
	b = 3-y; if(b<0) b=0-b;
	
	printf("%d",a+b);
	
	return 0;
}
