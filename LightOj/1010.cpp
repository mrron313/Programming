#include<cstdio>
#include<cmath>

int main(){
	
	int t, m=1, k;
	float res, i, j;
	
	scanf("%d",&t);
	
	while(m<=t){
		scanf("%f%f",&i,&j);
		
		if(i==1){
			res = j;
		}else if(j==1){
			res = i ;
		}else if(i==2 || j==2){
			if(j==2)
				j=i ;
			k = 0;
			int c=1,p=0;
			while(k+2<=j){
				if(c%2==1) p++;
				k+=2;
				c++;
			}
			res = 4*p ;
			if(k!=j && k%4==0){
				res+=2;
			}
				
		}else{
			res = ceil((i*j)/2);
		}
		printf("Case %d: %d\n",m,(int)res);
		m++;
	}
	
	return 0;
}
