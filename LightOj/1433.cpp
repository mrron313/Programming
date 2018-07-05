#include<stdio.h>
#include<math.h>

int main(){
	
	double a, b, c, d, e, f, x, y, z;
	int i=1,t;
	
	scanf("%d",&t);
	
	while(i<=t){
		scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
		
		x = sqrt(pow((a-c),2)+pow((b-d),2));
		y = sqrt(pow((a-e),2)+pow((b-f),2));
		z = sqrt(pow((e-c),2)+pow((f-d),2));
		
		printf("Case %d: %lf\n",i,acos(  (pow(x,2)+pow(y,2)-pow(z,2) )/(2*x*y)  )*x );

		i++;
	}
	
	return 0;
}
