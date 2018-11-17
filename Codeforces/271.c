#include<stdio.h>

int main(){
	
	int i,n,m,r[5],k;
	
	scanf("%d",&n);
	
	for(i=n+1;i>0;i++){
		m=i;k=0;
		while(m!=0){
			r[k]=m%10;
			m=m/10;
			k++;
		}
		if(r[0]==r[1] || r[0]==r[2] || r[0]==r[3] || r[1]==r[2] || r[1]==r[3] || r[2]==r[3]){
			continue;
		}
		else {
			for(i=3;i>=0;i--) printf("%d",r[i]);
			break;
		}
	}
	
	return 0;
}
