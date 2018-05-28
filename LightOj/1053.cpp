#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
	
	int t, kase=1, a, b, c;
	
	scanf("%d",&t);
	
	while(kase<=t){
		scanf("%d%d%d",&a,&b,&c);
		if( (pow(a,2) == pow(b,2)+pow(c,2)) || (pow(b,2) == pow(a,2)+pow(c,2)) || (pow(c,2) == pow(b,2)+pow(a,2))   )
			printf("Case %d: yes\n",kase);
		else
			printf("Case %d: no\n",kase);
		kase++;
	}
	
	return 0;
}
