#include<cstdio>
#include<cstring>

int cost[1001], weight[1001], n, g, dp[1001][31];

int maxi(int a,int b){
	if(a>b) return a; else return b;
}

int call(int i,int w){
	if(i>=n) return 0;
	
	if(dp[i][w]!=-1) return dp[i][w];
	int pr1=0, pr2=0;
	if(w-weight[i]>=0){
	    pr1 = cost[i]+call(i+1,w-weight[i]);
	}
	
	pr2 = call(i+1,w);
	dp[i][w] = maxi(pr1,pr2);
	return dp[i][w];
}

int main(){
	
	int t,total,j;
		
	scanf("%d",&t);
	
	while(t--){
		memset(dp,-1,sizeof(dp));
		total=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d%d",&cost[i],&weight[i]);
			
		scanf("%d",&g);
		for(int i=0;i<g;i++){
			scanf("%d",&j);
			total+=call(0,j);
		}
			
		printf("%d\n",total);
		
	}
	
	return 0;
}
