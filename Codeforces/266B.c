#include<stdio.h>
#include<string.h>

int main(){
	
	int n, k, i, l,f=1;
	char s[52];
	
	scanf("%d%d",&n,&k);
	getchar();
	gets(s);
	
	l = strlen(s);
	
	for(int j=1; j<=k && f==1; j++){
		f=0;
		for(i=0;i<l-1;i++){
			if(s[i]=='B' && s[i+1]=='G'){
				s[i+1] = 'B'; s[i] = 'G';
				f=1;
				i++;
			}
		}
	}
	
	printf("%s",s);
	
	return 0;
}
