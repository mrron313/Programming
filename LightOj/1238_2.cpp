#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int s1, s2, s3, d, N, arr[450][450];

int max(int a,int b) { if(a>b) return a; else return b;}

void DFS(){

    for(int k=1;k<=N;k++) {
       for(int i=1;i<=N;i++){
			if( arr[i][k] <500 )
          	{       	
      		for(int j=1;j<=N;j++)
       			if(arr[i][j]>arr[i][k]+arr[k][j])
       				arr[i][j]=arr[i][k]+arr[k][j];
       		}
      	}
    }
		
}

int main(){
	
	int n, t, p=1, k, row, col ;
	char c;
	
	scanf("%d",&t);
	
	while(p<=t){
		scanf("%d%d",&row,&col);
		N=row*col;
	
		memset(arr,600,sizeof(arr));
				
		k=1;
		for(int i=1;i<=row;i++){
			for(int j=1;j<=col;j++){
				cin>>c;
				if(c=='#' || c=='m'){
					if(k-col>=1) arr[k][k-col]=arr[k-col][k]=500;
					if(k+col<=row*col) arr[k+col][k]=arr[k][k+col]=500;
					if(k-1>=1) arr[k][k-1]=arr[k-1][k]=500;
					if(k+1<=row*col) arr[k][k+1]=arr[k+1][k]=500;
				}else if(c=='.' || c=='a' || c=='b' || c=='c' || c=='h'){
					if(k-col>=1 && arr[k][k-col]!=500)arr[k][k-col]=arr[k-col][k]=1;
					if(k+col<=row*col && arr[k][k+col]!=500) arr[k+col][k]=arr[k][k+col]=1;
					if(k-1>=1 && arr[k][k-1]!=500) arr[k][k-1]=arr[k-1][k]=1;
					if(k+1<=row*col && arr[k][k+1]!=500) arr[k][k+1]=arr[k+1][k]=1;
					if(c=='a') s1=k; else if(c=='b') s2=k; else if(c=='c') s3=k; else if(c=='h') d=k;
				}
				k++;
			}
		}
		
		DFS();
		
		printf("Case %d: %d\n",p,max(arr[s1][d],max(arr[s2][d],arr[s3][d]))) ;
		p++;
			
	}
	
	return 0;
}


