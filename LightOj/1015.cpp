#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	
	int t, n, kase=1, a, sum=0;
	
	scanf("%d",&t);
	
	while(kase<=t){
	//	printf("\n");
		scanf("%d",&n);
		sum=0;
		while(n>0){
			scanf("%d ",&a);
			if(a<0){
				sum=sum+0;
			}else{
				sum+=a;
			}
			n--;
		}
		printf("Case %d: %d\n",kase,sum);
		kase++;
	}
	
	return 0;
}
