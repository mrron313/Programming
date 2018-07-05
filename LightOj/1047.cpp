#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int N, COST[25][4], dp[25][4];

int call(int i,int p){
	
	if(i>=N){
		return 0;
	}
	if(dp[i][p]!=-1) return dp[i][p];
	
	int a=0, b=0; 
	if(p==0){
		a = COST[i][1]+call(i+1,1);
		b = COST[i][2]+call(i+1,2);
	}
	else if(p==1){
		a = COST[i][0]+call(i+1,0);
		b = COST[i][2]+call(i+1,2);
	}
	else if(p==2){
		a = COST[i][0]+call(i+1,0);
		b = COST[i][1]+call(i+1,1);
	}
	dp[i][p]=min(a,b);
	return dp[i][p];
}

int main(){
	
	int t,i=1,a;
	
	cin>>t;
	
	while(i<=t){
	        
		cin>>N;
		for(int j=0; j<N; j++){
			cin>>COST[j][0]>>COST[j][1]>>COST[j][2];
		}
		int ans=1000000;

		for(int z=0;z<3;z++){
			memset(dp,-1,sizeof(dp));
			a=COST[0][z]+call(1,z);
			ans=min(ans,a);
		}
		
		cout << "Case " << i << ": " << ans << endl;
		i++;
	}
	
	return 0;
}

