#include<cstdio>
#include<iostream>

using namespace std;

int main(){
	
	FILE *f = fopen("out.txt","r");
	int arr[10][10];
	int a, b, j, i;

	for(i=0; i<2 ;i++){
		j=0;
		while ( (fscanf(f, "%d", &a) == 1) && j<4 ){
			arr[i][j]=a;
			//cout << a;
			j++;
		}
	}
	
	for(int k=0; k<i ; k++){
		for(int s=0 ; s<j ; s++)
			cout << arr[k][s];
		cout << endl;	
	}
	
	return 0;	
}
