#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<string>
using namespace std;

int N,COLOR[20001],flag;
vector<int>G[20001];
map<string,int> h;

void DFS_Visit(int i){
	
	COLOR[i]=1;
	for(int k=0;k<G[i].size();k++){
		
		if( COLOR[G[i][k]]==0 ){
			if(!G[G[i][k]].empty()){
				DFS_Visit(G[i][k]);
			}
		}
		else if(COLOR[G[i][k]]==1){
			flag=1;
			break;
		}
		
	}
	COLOR[i]=2;
	
}

void DFS(){
	flag=0;
	
	memset(COLOR,0,sizeof(COLOR));
	for(int i=1;i<=N;i++){
		if(flag==1){
			break;
		}
		if(COLOR[i]==0){
			DFS_Visit(i);
		}
	}
		
}

int main(){
	
	int t,n,i=1,val;
	scanf("%d",&t);
	string a,b;

	while(i<=t){
		scanf("%d",&n);
		val=1;
		while(n>0){
			cin>>a>>b;
			if(!h[a])h[a]=val++;
			if(!h[b])h[b]=val++;
			G[h[a]].push_back(h[b]);
			n--;
		}
		N=val-1;
		printf("Case %d: ",i);
		DFS();
		if(flag==0){
			printf("Yes\n");
		}else 	printf("No\n");

		for(int p=1;p<=N;p++) G[p].clear();
		h.clear();
		i++;
	}
	
	return 0;

}
