#include<stdio.h>
#include<malloc.h>

void sort(int *arr,int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
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
