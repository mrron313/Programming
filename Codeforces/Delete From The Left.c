#include<stdio.h>
#include<string.h>

int main(){
	
	char s1[200005], s2[200005];
	long long l1,l2,c,res,i,j;
	
	

			gets(s1);
			gets(s2);
			c=0;
			l1=strlen(s1);
			l2=strlen(s2);
			
			//(l1<=l2) l=l1; else l=l2;
			i = l1-1; j = l2-1;
			
			while(1){
				if(i<0 || j<0)
					break;
					
				if(s1[i]!=s2[j])
					break;
				else 
					c++;
				i--;j--;
			}
			
			res = (l1-c)+(l2-c);
			
			printf("%lld",res);	
	
	return 0;
}
