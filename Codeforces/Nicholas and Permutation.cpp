#include<stdio.h>

int maxNumber(int a,int b){
	if(a>b) return a; else return b;
}

int main(){
	
	int n, maxi, mini, i, p, a, b, c, d;
	int maxIndex, minIndex;
	
	scanf("%d",&n);
	maxi = -1;
	mini = n+1;
	
	for(int i=1; i<=n ; i++){
		scanf("%d",&p);
		if(maxi<p){
			maxIndex=i;
			maxi=p;
		} 
		if(mini>p){
			minIndex=i;
			mini=p;
		} 
	}
	a=b=c=d=0;
	if(maxIndex<minIndex){
		a = minIndex-1; 
	}
	
	if(maxIndex>minIndex){
		b = n - minIndex;
	}
	
	if(maxIndex>minIndex){
		c = maxIndex - 1;
	}
	
	if(maxIndex<minIndex){
		d = n - maxIndex;
	}
	
	printf("%d",maxNumber(a,maxNumber(b,(maxNumber(c,d)))));
	
	
	return 0;
}
