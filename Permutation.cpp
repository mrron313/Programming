#include<stdio.h>

int n=3,number[4],used[4];

void perm(int at,int last){
	
	if(at==n+1){
		for(int p=1;p<=n;p++){
			printf("%d ",number[p]);
		}
		printf("\n");
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(!used[i]){
			used[i]=1;
			number[at]=i;
			perm(at+1,i);
			used[i]=0;
		}
	}
	
}

int main(){
	perm(1,0);
	return 0;
}
