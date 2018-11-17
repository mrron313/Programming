#include<cstdio>

int main(){
	
	int n, c, count;
	
	while(scanf("%d",&n)==1){
		
		c = count = 0;
		do{
			
			c = ((c*10)%n+1%n)%n; 
			count++;
			
		}while(c!=0);
		
		printf("%d\n",count);
	}
	
	return 0;
}
