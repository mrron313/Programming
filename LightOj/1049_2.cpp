#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>

using namespace std;

int N, C[105][105], s, prev[105];
queue <int> Q;

int BFS(int a){
	
	Q = queue<int>();

	prev[a]=s;
	Q.push(a);
	int res=0,u;

	while(!Q.empty()){
		u = Q.front();
		Q.pop();
		if(u!=s)
			for(int i=1;i<=N;i++){	
	
				if(C[u][i]!=0 || C[i][u]!=0){
					
					if (prev[u]!=i){
						Q.push(i);
						prev[i]=u;
						if (C[i][u]!=0)
							res+=C[i][u];
					} 
				}
			}
	}
	
	return res;
}

int min(int a,int b) { if(a<b) return a; else return b;}

int main(){
	
	int n, t, i=1, a, b, w, lefts, rights;
	
	scanf("%d",&t);
	s=1;
	
	while(i<=t){
		scanf("%d",&n);
		lefts=0, rights=0;
		N=n;
		
		memset(C, 0, sizeof(C));
		memset(prev, 0, sizeof(prev));

		while(n>0){
			scanf("%d%d%d",&a,&b,&w);
			if(a==1 && lefts==0) lefts=b;
			else if(a==1 && rights==0) rights=b;
			else if(b==1 && lefts==0) lefts=a;
			else if(b==1 && rights==0) rights=a;
			
			C[a][b]=w;
			n--;
		}
		a=b=0;
		if(C[lefts][s]) a = C[lefts][s]; 
		if(C[rights][s]) b = C[rights][s]; 

		printf("Case %d: %d\n",i,min(a+BFS(lefts),b+BFS(rights)) );
		
		i++;
	}
	
	return 0;
}
