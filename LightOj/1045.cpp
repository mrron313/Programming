#include<bits/stdc++.h>

using namespace std;

double dp[1000001];

int main(){
	
	int a, b, t, kase=1;
	
	long long cnt;
	scanf("%d",&t);
	
	dp[0]=0;
	
	for(int i=1;i<=1000000;i++){
		dp[i] = dp[i-1]+log10(i);
	}
	
	while(kase<=t){
		scanf("%d%d",&a,&b);
		
		cnt = (dp[a] / log10(b)) + 1 ;
		
		printf("Case %d: %lld\n",kase,cnt);
		kase++;
	}
	
	return 0 ;
}
