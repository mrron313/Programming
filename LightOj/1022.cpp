#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
	
	int t, kase=1;
	double r, res;
	
	scanf("%d",&t);
	
	while(kase<=t){
		scanf("%lf",&r);
		res = pow((r*2),2) - 2*acos(0.0)*pow(r,2);
			
		printf("Case %d: %0.2lf\n",kase,res+0.000000001);
		kase++;
	}
	
	return 0;
}
