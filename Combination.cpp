#include<stdio.h>

int n=3,k=2,number[3];

void perm(int at,int last){
	
	if(at==k+1){
		for(int p=1;p<=k;p++){
			printf("%d ",number[p]);
		}
		printf("\n");
		return;
	}
	
	for(int i=last+1;i<=n-k+at;i++){
		number[at]=i;
		perm(at+1,i);	
	}
	
}

int main(){
	perm(1,0);
	return 0;
}
