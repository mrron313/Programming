#include<iostream>
#include<cstdio>

using namespace std;

long long func(long long a,long long b){

	long long d;
	
    	if(a==b){
	        if(a%3==0 || (a+1)%3==0)
	        	return 1;
	        else
	        	return 0;
		}
		else{
			if((b-1)%3==0) d = 2*(b/3);
			else if((b%3)==0) d = 2*(b/3);
			else if((b+1)%3==0) d = 2*(b/3)+1;
		}
		
	return d;
}

int main(){
	
	long long a, b, c;
	int t,kase=1;
	
	scanf("%d",&t);		
	
	while(kase<=t){

		scanf("%lld%lld",&a,&b);		
		
		if(a==b)
			c = func(a,b);
		else
			c = func(1,b) - func(1,a-1);
		
		printf("Case %d: %lld\n",kase,c);
		
		kase++;
	}
	
	return 0;
}
