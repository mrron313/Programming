#include<stdio.h>
#include<string.h>

int main(){
	
	int sum, a, t, i=1, n, k;
	char s[20];
	
	scanf("%d",&t);
	
	while(i<=t){
		a=sum=0;
		
		scanf("%d",&n);
		getchar();
		printf("Case %d:\n",i);
		
		while(n>0){
			k=1;
			gets(s);			 		
			if(s[5]!='t'){
				for(int i=strlen(s)-1;s[i]!=' ';i--){
					a = a + (s[i]-'0')*k;				
					k *= 10;
				}
			}
			
			else printf("%d\n",a);
			
			n--;
		}
		
		i++;
	}
	
	
	return 0;
}
