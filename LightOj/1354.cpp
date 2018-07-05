#include<stdio.h>
#include<string.h>

int flag;

void check(int a,char *s){
	
	int r;char c,i=1;
	
	while(i<=8){
		if(a!=0){
			r = a%2;
			a = a/2;
			c=r+'0';	
		}
		else c ='0';
		//printf("%c %c\n",c,s[8-i]);
		if(c!=s[8-i]){
			flag=1;
			break;
		}
		i++;
	}
}

int main(){
	
	int t,i=1, a,b,c,d;
	char w[8],x[8],y[8],z[8],k[35];
	
	scanf("%d",&t);
	
	while(i<=t){	

		flag=0;
		scanf("%d.%d.%d.%d",&a,&b,&c,&d);
		scanf("%s",k);
		
		strncpy(w,k,8);
		strncpy(x,k+9,8);
		strncpy(y,k+18,8);
		strncpy(z,k+27,8);
		
		if(flag==0) check(a,w);
		if(flag==0) check(b,x);
		if(flag==0) check(c,y);
		if(flag==0) check(d,z);
		
		printf("Case %d: ",i);
		if(flag==0){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
		
		i++;
	}
	
	return 0;
}
