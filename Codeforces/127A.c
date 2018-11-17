#include<stdio.h>
#include<math.h>

int main(){
	
	float a, b, c, d, res=0.0;
	int i=1, n, k;
	scanf("%d%d",&n,&k);
	
	a = b = 0;
	while(i<=n){
		
		c = a;
		d = b;
		
		scanf("%f%f",&a,&b);
		
		if(i!=1){
			res+=sqrt(pow(a-c,2)+pow(b-d,2));
		}
			
		i++;
	}
	
	printf("%f",(res/50.0)*k);

	return 0;
}
