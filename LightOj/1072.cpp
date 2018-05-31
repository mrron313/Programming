#include<bits/stdc++.h>

#define PI 3.14159265

using namespace std;

int main(){
	
	double R, r;
	int n, t, kase=1;
	
	cin >> t;
	
	while(kase<=t)
	{
		scanf("%lf%d",&R,&n);
		
		cout << "Case " << kase << ": " ;
		printf("%.10lf\n",( (R*sin(PI/n)) / (1+(sin(PI/n))) ) );

		kase++;
	}
	

	return 0;
}
