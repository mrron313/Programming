#include<stdio.h>
#include<malloc.h>

void sort(int *arr,int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j+1]<arr[j]){
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
}

int main(){
	
	int n=5;
	
	int *arr = (int *) malloc(sizeof(int *)*n);
	
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	sort(arr,n);
	
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
		
	return 0;
}
