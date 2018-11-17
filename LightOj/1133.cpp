#include<iostream>
#include<cstdio>

using namespace std;
int N;

void sum(int *arr,int a){
	for(int i=0;i<N;i++) {
		arr[i]=arr[i]+a;
	}
}

void mul(int *arr,int a){
	for(int i=0;i<N;i++) arr[i]*=a;
}

void div(int *arr,int a){
	for(int i=0;i<N;i++) arr[i]/=a;
}

void swap(int *arr,int a,int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void reverse(int *arr){
	int i,j,temp;
	
	for(i=0,j=N-1;i<N/2;i++,j--){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}


int main(){
	
	int t, i=1, arr[105], m, p, a, b;
	char c;
	
	scanf("%d",&t);
	
	while(i<=t){
		
		scanf("%d%d",&N,&m);
		p=0;
		while(p<N){
			scanf("%d",&arr[p]);
			p++;
		}
		
		while(m>0){
			cin >> c;			
			if(c=='S' || c=='M' || c=='D'){
				scanf("%d",&a);
				if(c=='S') sum(arr,a);
				else if(c=='M') mul(arr,a);
				else if(c=='D') div(arr,a);
			}else{
				if(c=='R'){
					reverse(arr);
				}else{
					scanf("%d%d",&a,&b);
					swap(arr,a,b);
				}
			}
			m--;
		}
		
		printf("Case %d:\n%d",i,arr[0]);
		for(int i=1;i<N;i++){
			printf(" %d",arr[i]);
		}
		printf("\n");
		i++;
	} 
	
	return 0;
}
