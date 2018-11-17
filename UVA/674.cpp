#include<stdio.h>
#include<string.h>

int coins [] = {50, 25, 10, 5, 1} ;

int dp[6][7500];
int target;

int call(int i, int amount){
	 
	if(i>=5){
		if(amount==0) return 1;
		else return 0;
	}
	
	if(dp[i][amount]!=-1) return dp[i][amount];
	
	int r1,r2;
	if(amount-coins[i]>=0){
		r1 = call(i,amount-coins[i]);
	}
	else r1 = 0;
	r2 = call(i+1,amount);
	
	dp[i][amount]=r1+r2;
	
	return dp[i][amount];
	
}

int main(){
	memset(dp,-1,sizeof(dp));
	
	while( scanf ("%d", &target) != EOF){
		printf("%d\n",call(0,target));
	}
	
	return 0;
}
