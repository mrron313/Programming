#include<cstdio>

int b,p,m;

int call(int b, int p){
	
	if(p==0) return 1;
	
	if(p%2==0){
		int ret = call(b,p/2);
		return ((ret%m)*(ret%m))%m;
	}else{
		return ((b%m)*(call(b,p-1)%m))%m;
	}
}

int main(){
	
	while(scanf("%d%d%d",&b,&p,&m)==3){
		printf("%d\n",call(b,p));
	}
	
	return 0;
}
